# include "Pilha.h"

Pilha* Pilha::Inserir(Pilha *T, int x){
    Pilha *novo = new Pilha();
    novo->N = x;
    novo->elo = T;
    T = novo;
    return T;
};
Pilha* Pilha::Remover(Pilha *T){
    Pilha *aux = T;
    T = T->elo;
    delete(aux);
    return T;
};
int Puilha::Somar(Pilha *T){
    Pilha *aux = T;
    int soma = 0;
    while(aux != NULL){
        soma += aux->N:
        aux = aux->elo;
    }
    return soma;
}
