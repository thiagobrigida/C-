#include <iostream>

class Lista {
    private:
        std::string Nome;
        int Tempo;
        Lista* elo ;
    public:
        Lista** Inserir(Lista**, std::string , int);
        void Exibir(Lista**);
        Lista** Executar(Lista**);
        Lista** Excluir(Lista **, std :: string , bool*);
};
