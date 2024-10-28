#include <iostream>

class Ordena
{
    public:
        void Bolha(int[], int, int*, int*);
        void BolhaMelhorado(int[], int, int*, int*);
        void Insertion(int[], int, int*, int*);
        void Selection(int[], int, int*, int*);
        void geraVetor(int [], int);
        void copiaVetor(int [], int[], int);
        void exibeVetor(int [], int);

    private:
        int i, j, aux;
};
