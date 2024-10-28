#include "Ordena.h"

using namespace std;

const int TAM = 10;

void Menu(){
system("clear");
    cout << "a) Gerar Vetor:\n";
    cout << "b) Ordenar pelo método Bolha:\n";
    cout << "c) Ordenar pelo método Bolha Melhorado:\n";
    cout << "d) Ordenar pelo método Inserção:\n";
    cout << "e) Ordenar pelo método Seleção:\n";
    cout << "f) Finalizar o programa:\n";
    cout << "Escolha sua opção:";
}

int main()
{
    srand(time(NULL));
    Ordena Obj;
    int vet[TAM], copia[TAM], trocas, comp;
    char op;
    do{
        Menu();
        cin >> op;
        switch(op){
            case 'a':
                Obj.geraVetor(vet, TAM);
                cout << "Vetor gerado com sucesso!\n";
                break;
            case 'b':
                Obj.copiaVetor(vet, copia, TAM);
                cout << "Vetor original: ";
                Obj.exibeVetor(copia, TAM);
                trocas = comp = 0;
                Obj.Bolha(copia, TAM, &trocas, &comp);
                cout << "\nVetor ordenado: ";
                Obj.exibeVetor(copia, TAM);
                cout << "Trocas: " << trocas << "  Comparações: " << comp << endl;
                break;
            case 'c':
                Obj.copiaVetor(vet, copia, TAM);
                cout << "Vetor original: ";
                Obj.exibeVetor(copia, TAM);
                trocas = comp = 0;
                Obj.BolhaMelhorado(copia, TAM, &trocas, &comp);
                cout << "\nVetor ordenado: ";
                Obj.exibeVetor(copia, TAM);
                cout << "Trocas: " << trocas << "  Comparações: " << comp << endl;
                break;
            case 'd':
                Obj.copiaVetor(vet, copia, TAM);
                cout << "Vetor original: ";
                Obj.exibeVetor(copia, TAM);
                trocas = comp = 0;
                Obj.Insertion(copia, TAM, &trocas, &comp);
                cout << "\nVetor ordenado: ";
                Obj.exibeVetor(copia, TAM);
                cout << "Trocas: " << trocas << "  Comparações: " << comp << endl;
                break;
            case 'e':
                Obj.copiaVetor(vet, copia, TAM);
                cout << "Vetor original: ";
                Obj.exibeVetor(copia, TAM);
                trocas = comp = 0;
                Obj.Selection(copia, TAM, &trocas, &comp);
                cout << "\nVetor ordenado: ";
                Obj.exibeVetor(copia, TAM);
                cout << "Trocas: " << trocas << "  Comparações: " << comp << endl;
                break;
            case 'f':
                cout << "FIM!\n";
            default:
                cout << "Opção Inválida\n";
        }
        cin.ignore().get();
    }while(op != 'f');


    return 0;
}
