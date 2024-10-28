#include <iostream>

using namespace std;

int main()
{
    int Time1, Time2, Placar1, Placar2, Pontos = 0;
    cout << "Informe o placar do jogo: ";
    cin >> Placar1 >> Placar2;
    cout << "Informe sua aposta: ";
    cin >> Time1 >> Time2;
    /*if((Time1 == Placar1) && (Time2 == Placar2))
        Pontos = 20;
    else if (((Placar1 > Placar2) && (Time1 > Time2) && (Time1 == Placar1)) ||
            ((Placar2 > Placar1) && (Time2 > Time1) && (Time2 == Placar2)) ||
            ((Placar1 > Placar2) && (Time1 > Time2) && (Time2 == Placar2)) ||
            ((Placar2 > Placar1) && (Time2 > Time1) && (Time1 == Placar1)))
                Pontos = 15;
    else if((Placar1 > Placar2) && (Time1 > Time2) ||
            (Placar1 > Placar2) && (Time2 > Time1))
            Pontos = 10;
    else if((Time1 == Placar1) || (Time2 == Placar2))
            Pontos = 5;

    else
            Pontos = 0;*/
    if (Placar1 == Time1)
        Pontos += 5;
    if (Placar2 == Time2)
        Pontos += 5;
    if ((Placar1 > Placar2 && (Time1 > Time2))||
        (Placar2 > Placar1 && (Time2 > Time1))||
        (Placar1 == Placar2) && (Time1 == Time2))
        Pontos += 10;
    cout << "Você marcou " <<  Pontos << " pontos.\n";
    return 0;
}
