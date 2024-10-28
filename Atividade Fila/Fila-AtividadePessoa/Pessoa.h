#include <iostream>
class Pessoa
{
    public:
        std::string Nome, Cidade, Estado;
        int AnoNascimento;
        Pessoa *elo;
        Pessoa* Inserir(Pessoa*, std::string, std::string, std::string, int);
        Pessoa* Excluir(Pessoa*);
        void Listar(Pessoa*);
};
