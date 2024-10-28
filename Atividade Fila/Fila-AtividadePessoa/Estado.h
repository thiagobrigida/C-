#include <iostream>
class Estado
{
    public:
        std::string Nome;
        int quantidade;
        Estado *elo;
        Estado* Inserir(Estado*, std::string);
        bool ProcuraEstado(Estado*, std::string);
        void diminuiQuantidade(Estado*, std::string);
        int Menor(Estado*);
        void ListarMenor(Estado*, int);
        void ListarTodas(Estado*);
};
