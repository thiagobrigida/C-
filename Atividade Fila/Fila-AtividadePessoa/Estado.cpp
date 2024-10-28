#include "Estado.h"

Estado* Estado::Inserir(Estado *f, std::string n){
    Estado *novoE = new Estado();
    novoE->Nome = n,
    novoE->quantidade = 1;
    novoE->elo = NULL;
    if(f != NULL){
        f->elo = novoE;
    }
    f = novoE;
    return f;
};
bool Estado::ProcuraEstado(Estado *i, std::string n){
    Estado *aux = i;
    while(aux != NULL){
        if(aux->Nome == n){
            aux->quantidade = aux->quantidade + 1;
            return true;
        }
        aux = aux->elo;
    }
    return false;
};
void Estado::diminuiQuantidade(Estado *i, std::string n){
    Estado *aux = i;
    while(aux != NULL){
        if(aux->Nome == n){
            aux->quantidade = aux->quantidade - 1;
            break;
        }
        aux = aux->elo;
    }
};
int Estado::Menor(Estado *I){
    int menor = I->quantidade;
    Estado *aux = I->elo;
    while(aux != NULL){
        if(aux->quantidade < menor){
            menor = aux->quantidade;
        }
        aux = aux->elo;
    }
    return menor;
};
void Estado::ListarMenor(Estado *I, int Q){
    Estado *aux = I;
    while(aux != NULL){
        if(aux->quantidade == Q){
            std::cout << aux->Nome << " | ";
        }
        aux = aux->elo;
    }
};
void Estado::ListarTodas(Estado *i){
    Estado *aux = i;
    while(aux != NULL){
        std::cout << aux->Nome << " | " << aux->quantidade << "\n";
        aux = aux->elo;
    }
};
