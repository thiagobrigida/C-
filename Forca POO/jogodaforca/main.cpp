#include "Forca.h"

using namespace std;

int main()
{
    char continua;
    int contar;
    bool achei, acertou;
    srand(time(NULL));
    Forca F;
    do{
        F.Sortear();
        F.montarP2();
        F.letras = "";
        F.tentativas = 0;
        while(F.tentativas < 6 && !acertou){
            cout << "Palavra sorteada: " << F.p2 << endl;
            cout << "Jogadas erradas: " << F.tentativas << endl;
            cout << "Letras: " << F.letras << endl;
            cout << "Informe uma Letra: \n";
            cin >> F.L;
            F.verificaLetra();
            acertou = F.verificarFimJogo();
        }
        if(acertou){
            cout << "Parabéns!!!! Você fez o mínimo!!" << endl;
        }else{
            cout << "Você perdeu burrao!!! A palavra era: " << F.p1 << endl;
        }
        cout << "De novo? ";
        cin >> continua;
        }while(continua == 's');
    return 0;
}
