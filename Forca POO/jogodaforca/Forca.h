#include <iostream>
#define TAM 20
class Forca
{
    public:
        void Sortear();
        void montarP2();
        void verificaLetra();
        bool verificarFimJogo();
        std::string palavras[TAM] = {"arvore", "loucura", "dinossauro","paralelepipedo", "discografia", "musicalidade",
                                "elemento", "caleidoscopio", "casa", "estoicismo", "demorado",
                                "termostato", "vertigem", "trevas", "cavaleiro", "coringa",
                                "porte", "precificado", "flamengo", "vampiro"} ;
        std::string p1, p2, letras;
        char L;
        int n, jogadas, tentativas, i;
};
