#include "Forca.h"

void Forca::Sortear(){
    int n = rand() % TAM;
    p1 = palavras[n];
};

void Forca::montarP2(){
    p2 = "";
    letras = "";
    for(i = 0; i < p1.length(); i++){
        p2 += '_';
    }
}

void Forca::verificaLetra(){
    bool achei = false;
    for(i = 0; i < p1.length(); i++){
        if(p1[i] == L){
            p2[i] = L;
            achei = true;
        }
    }
    if(!achei){
        letras += L;
        tentativas++;
    }
}


bool Forca::verificarFimJogo(){
    bool acabou = true;
    for(int i = 0; i < p2.length(); i++){
        if(p2[i] == '_'){
            acabou = false;
        }
    }
}
