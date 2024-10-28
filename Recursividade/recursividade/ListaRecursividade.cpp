#include <iostream>

using namespace std;

int MDCiterativo(int a, int b){
    int resto;
    while(a % b != 0){
        resto = a % b;
        a = b;
        b = resto;

    }
    return b;
}

int MDCrecursivo(int a, int b){
    if(a % b = 0){
        return b;
    }
    MDCrecursivo(b, a%b);

}

int main()
{
    int n1, n2;
    cout << "Informe os números: ";
    cin >> n1 >> n2;
    cout << "MDC: " << MDCiterativo(n1, n2);
    cout << "\nMDC: " << MDCrecursivo(n1, n2);


    return 0;
}
