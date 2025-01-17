#include "Lista.h"
#include <unistd.h>

Lista** Lista::Inserir(Lista **R, std :: string n, int t){
    Lista *novo = new Lista () ;
    novo -> Nome = n;
    novo -> Tempo = t;
    if(R[0] == NULL){
        R[0] = novo ;
        R[1] = novo ;
        R[1] -> elo = R[0];
    }else{
        Lista *anterior = NULL, *atual = R[0];
        while((atual != R[1]) && (novo -> Nome > atual -> Nome)){
            anterior = atual;
            atual = atual -> elo;
        }
        if(atual == R[0]){
            novo -> elo = R[0];
            R[0] = novo ;
            R[1] -> elo = R[0];
        }
        else if(atual == R[1] && novo -> Nome > R[1] -> Nome){
            R[1] -> elo = novo;
            R[1] = novo;
            R[1] -> elo = R[0];
        }
        else{
            anterior -> elo = novo;
            novo -> elo = atual;
        }
    }
    return R;
};

void Lista::Exibir(Lista **R){
    Lista * aux = R[0];
    while(aux != R[1]){
        std::cout << aux -> Nome << " - " << aux -> Tempo << "\n";
        aux = aux -> elo;
    }
    std::cout << aux -> Nome << " - " << aux -> Tempo << "\n";
};

Lista** Lista::Excluir(Lista **R, std::string n, bool* achei){
    Lista *anterior = NULL, * atual = R[0];
    while((atual != R[1]) && ( atual -> Nome != n)){
        anterior = atual;
        atual = atual -> elo;
    }
    if(atual == R[1] && atual -> Nome != n){
        *achei = false ;
    }else{
        *achei = true ;
        if(atual == R[0] && R[0] != R[1]){
            R[0] = R[0] -> elo;
            R[1] -> elo = R[0];
        }else if(atual == R[0] && R[0] == R[1]){
            R[0] = NULL;
            R[1] = NULL;
        }else if(atual == R[1]){
            R[1] = anterior;
            R[1] -> elo = R[0];
        }else{
            anterior -> elo = atual -> elo;
        }
    delete(atual);
    }
 return R;
 };

Lista** Lista::Executar(Lista **L){
    unsigned int microsecond = 1000000;
    bool achei;
    Lista *aux = L[0], *prox;
    while(aux != NULL){
        if(aux -> Tempo > 0){
            aux -> Tempo = aux -> Tempo - 1;
            std::cout << "Executando: " << aux -> Nome << " | Tempo restante: " << aux ->
            Tempo << "\n";
            usleep(microsecond);
            aux = aux -> elo;
        }
        else{
            if(L[0] != L[1]){
                prox = aux -> elo;
                L = Excluir(L, aux->Nome, &achei);
                aux = prox;
            }
            else{
                L = Excluir(L, aux -> Nome, &achei);
                aux = NULL;
            }#include <unistd.h>
        }
    }
return L;
}

