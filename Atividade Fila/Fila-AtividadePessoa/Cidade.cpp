#include "Cidade.h"

Cidade* Cidade::Inserir(Cidade *f, std::string n){
    Cidade *novoC = new Cidade();
    novoC->Nome = n,
    novoC->quantidade = 1;
    novoC->elo = NULL;
    if(f != NULL){
        f->elo = novoC;
    }
    f = novoC;
    return f;
};
bool Cidade::ProcuraCidade(Cidade *i, std::string n){
    Cidade *aux = i;
    while(aux != NULL){
        if(aux->Nome == n){
            aux->quantidade = aux->quantidade + 1;
            return true;
        }
        aux = aux->elo;
    }
    return false;
};
void Cidade::diminuiQuantidade(Cidade *i, std::string n){
    Cidade *aux = i;
    while(aux != NULL){
        if(aux->Nome == n){
            aux->quantidade = aux->quantidade - 1;
            break;
        }
        aux = aux->elo;
    }
};
int Cidade::Maior(Cidade *I){
    int maior = I->quantidade;
    Cidade *aux = I->elo;
    while(aux != NULL){
        if(aux->quantidade > maior){
            maior = aux->quantidade;
        }
        aux = aux->elo;
    }
    return maior;
};
class Estado
{
    public:
        Estado();

    protected:

    private:
};

void Cidade::ListarMaior(Cidade *I, int Q){
    Cidade *aux = I;
    while(aux != NULL){
        if(aux->quantidade == Q){
            std::cout << aux->Nome << " | ";
        }
        aux = aux->elo;
    }
};
void Cidade::ListarTodas(Cidade *i){
    Cidade *aux = i;
    while(aux != NULL){
        std::cout << aux->Nome << " | " << aux->quantidade << "\n";
        aux = aux->elo;
    }
};
