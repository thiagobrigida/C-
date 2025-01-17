#include <iostream>
#include <unistd.h>
#include "Lista.h"
using namespace std;

int main ()
{
    Lista **P , obj ;
    string N;
    int op, T;
    bool a ;
    P = new Lista *[2];
    P [0] = NULL ;
    P [1] = NULL ;
    do{
        system (" clear ") ;
        cout << " ************** MENU ************\n\n";
        cout << "1 - Inserir\n";
        cout << "2 - Exibir\n";
        cout << "3 - Executar\n";
        cout << "4 - Sair \n";
        cout << " Escolha a opção : ";
        cin >> op ;
        switch ( op ){
            case 1:
                cout << " Digite o nome do processo: ";
                cin.ignore();
                getline(cin, N);
                cout << " Digite o tempo total de processamento em segundos: ";
                cin >> T;
                P = obj.Inserir(P, N, T);
                cout << " Dados inseridos com sucesso!\n";
                break;
            case 2:
                if(P[0] == NULL){
                    cout << " Sem registros para exibir !!\n";
                }else{
                    cout << "Exibindo:\n";
                    obj.Exibir(P);
                }
                break;
            case 3:
                if(P[0] == NULL){
                    cout << " Sem registros para executar!!\n ";
                }else{
                    P = obj.Executar(P);
                }
                break ;
            case 4:
                cout << " Tchau !\ n";
                break ;
            default:
                cout << " Opção inválida !\n ";
        }
        cout << " Tecle Enter para continuar! ";
        cin.ignore().get();
    }while(op != 4);
    return 0;
}

