#include "Pessoa.h"

Pessoa* Pessoa::Inserir(Pessoa *F, std::string N, std::string C, std::string E, int A){
    Pessoa *novo = new Pessoa();
    novo->Nome = N;
    novo->Cidade = C;
    novo->Estado = E;
    novo->AnoNascimento = A;
    novo->elo = NULL;
    if(F != NULL){
        F->elo = novo;
    }
    F = novo;
    return F;
};
Pessoa* Pessoa::Excluir(Pessoa *I){
    Pessoa *aux = I;
    I = I->elo;
    delete(aux);
    return I;

};
void Pessoa::Listar(Pessoa *I){
    Pessoa *aux = I;
    while(aux != NULL){
        std::cout << aux->Nome << " | " << aux->Cidade << " | " << aux->Estado << " | " << aux->AnoNascimento << "\n";
        aux = aux->elo;
    }
};
