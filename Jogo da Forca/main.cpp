#include <iostream>

using namespace std;

///função 1
string montarEscondida(string palavra){
    string resposta = "";
    for(int i = 0;i < palavra.length(); i ++){
        resposta += '-';
    }
    return resposta;
}

///função 2
string verificarLetra(string escondida, char letra, string palavra, bool *achei){
    *achei = false;
    for(int i = 0; i < palavra.length(); i ++){
        if(palavra[i] == letra){
            escondida[i] = letra;
            *achei = true;
        }
    }
    return escondida;
}

///função 3
int contarTracos(string escondida){
    int contar = 0;
    for(int i = 0; i < escondida.length(); i ++){
        if(escondida[i] == '-'){
            contar++;
        }
    }
    return contar;
}

int main()
{
    string dicionario[20] = {"arvore", "loucura", "dinossauro","paralelepipedo", "discografia", "musicalidade",
                            "elemento", "caleidoscopio", "opioide", "estoicismo", "demorado",
                            "termostato", "vertigem", "trevas", "cavaleiro", "coringa",
                            "porte", "precificado", "flamengo", "vampiro"} ;

    string palavra, escondida, palpites;
    char letra, continua;
    int tentativas,contar, i;
    bool achei, acertou;
    srand(time(NULL));
    do{
        palavra = dicionario[rand() % 20];
        //escondida = string(palavra.length(), '-');

        /*
        escondida = "";
        for(i = 0; i < palavra.length(); i++){
            escondida += '-';
        }
        */
        ///chamando função 1
        escondida = montarEscondida(palavra);

        palpites = "";
        tentativas = 0;
        acertou = false;
        while(!acertou && tentativas < 7){
            cout << "Palavra sortada: " << escondida << endl;
            cout << "Tentativas erradas: " << tentativas << endl;
            cout << "Palpites feitos: " << palpites << endl;
            cout << "Informe uma letra: \n";
            cin >> letra;

            ///chamando fução 2
            escondida = verificarLetra(escondida, letra, palavra, &achei);

            if(!achei){
                tentativas++;
            }
            palpites += letra;

            ///chamando função 3
            contar = contarTracos(escondida);

            if(contar == 0){
                acertou = true;
            }
        }
        if(acertou){
            cout << "Parabéns!!!! Você fez o mínimo!!" << endl;
        }else{
            cout << "Você perdeu burrao!!! A palavra era: " << palavra << endl;
        }
        cout << "De novo? ";
        cin >> continua;
        }while(continua == 's');
    return 0;
}
