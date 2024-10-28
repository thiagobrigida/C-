#include "Ordena.h"

void Ordena::Bolha(int v[], int t, int *trocas, int *comp){
    for(i = 0; i < t; i++){
        for(j = 0; j < t - 1; j ++){
            (*comp)++;
            if(v[j] > v[j+1]){
                (*trocas)++;
                aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
};


void Ordena::BolhaMelhorado(int v[], int t, int *trocas, int *comp) {
        int i = 1 , j , aux ;
        bool troca = true;
        while (( i <= t) && ( troca )){
            troca = false ;
            for(j = 0; j < t -1; j ++){
                (*comp)++;
                if( v[j] > v[j+1]){
                    (*trocas)++;
                    troca = true;
                    aux = v[j];
                    v[j] = v[j+1];
                    v[j+1] = aux ;
                }
            }
            i ++;
        }
    }


void Ordena::Insertion(int v[], int t, int *trocas, int *comp) {
    int i , j , eleito ;
    for( i = 1; i < t; i ++) {
        eleito = v[i];
        j = i - 1;
        while (( j >= 0) && ( v[j] > eleito )) {
            v[j+1] = v[j];
            (*comp)++;
            (*trocas)++;
            j--;
        }
    (*trocas)++;
    v[j+1] = eleito;
    }
}


void Ordena::Selection(int v[], int t, int *trocas, int *comp) {
int i , j , eleito , menor , pos ;
    for(i = 0; i < t -1; i ++) {
        eleito = v[i];
        menor = v[i+1];
        pos = i + 1;
        for(j = i +2; j < t ; j ++) {
            (*comp)++;
            if( v[j] < menor ){
                (*trocas)++;
                menor = v[j];
                pos = j ;
            }
        }
    }
    if( menor < eleito ){
        v[i] = v[pos];
        v[pos] = eleito ;
    }
}


void Ordena::geraVetor(int v[], int t){
    for(i = 0; i < t; i++)
        v[i] = rand() % 100 + 1;
}


void Ordena::copiaVetor(int v1[], int v2[], int t){
    for(i = 0; i < t; i++)
        v2[i] = v1[i];
}


void Ordena::exibeVetor(int v[], int t){
    for(i = 0; i < t; i++)
        std::cout << v[i] << "  ";
}
