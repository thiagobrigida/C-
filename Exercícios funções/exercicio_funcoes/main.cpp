#include <iostream>
using namespace std;


int exponencial(int a, int b){
    if(b == 0)
        return 1;
    if(b < 0){
        a = 1/a;
        b *= -1;
    }
    int result = a;
    for(int i = 1; i < b; i ++){
        result *= a;
    }
    return result;
}

int logaritmo(int logari, int base){
    if (logari == 1)
        return 0;
    int expoente = 1;
    do{
        logari /= base;
        expoente++;
    }while(logari > base);
    return expoente;
}

bool palindromo(string palavra){
    int tam = palavra.length();
    for(int i = 0; i < tam / 2; i ++){
        if(palavra[i] != palavra[tam-1-i]){
            return false;
        }
    }
    return true;
}


int main()
{
  cout << "O exponencial é:" << exponencial(5, 2) << endl;
  cout << "O logaritmo é:" << logaritmo(3, 81) << endl;

  if(palindromo("computador")){
    cout << "É palíndromo";
  }
  else {
    cout << "Não é palíndromo";
  }

    return 0;
}
