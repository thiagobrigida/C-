#include <iostream>

using namespace std;

int main()
{
    int velMaxima, velMotorista, multa;
    cout << "Digite a velocidade máxima";
    cin >> velMaxima;
    cout << "Digite a velocidade do motorista: ";
    cin >> velMotorista;
    if(velMotorista > velMaxima){
        multa = (velMotorista - velMaxima) * 5;
        cout << "Multa: R$" << multa << endl;
    } else{
        cout << "Não tem multa" << endl;
    }
}
