#include <iostream>
class Cidade
{
    public:
        std::string Nome;
        int quantidade;
        Cidade *elo;
        Cidade* Inserir(Cidade*, std::string);
        bool ProcuraCidade(Cidade*, std::string);
        void diminuiQuantidade(Cidade*, std::string);
        int Maior(Cidade*);
        void ListarMaior(Cidade*, int);
        void ListarTodas(Cidade*);
};

