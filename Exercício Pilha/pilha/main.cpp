#include "Pilha.h"

using namespace std;

int main()
{
    Pilha P, *Topo = NULL;
    int N, X;
    do{
        cout << "Informe N: ";
        cin >> N;
    }while(N < 1 || N > 1000000);
    for(int i = 1; i <= N; i++){
        do{
            cout << "Informe x" << i << ": ";
            cin << x;
        }while(X < 0 || X > 100);
        if(x > 0){
            Topo = P.Inserir(Topo, X);
        }else{
            if(Topo != NULL){
                Topo = P.Inserir(Topo, X);
        }else{
            if(Topo != NULL){
                Topo = P.Remover(Topo);
            }else{
                cout << "ERRO: Pilha vazia!\n";
            }
        }
    }
    cout << P.Somar(Topo) << endl;
    return 0;
}
