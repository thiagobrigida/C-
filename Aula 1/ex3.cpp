#include <iostream>

using namespace std;

int main()
{
    int i , j;
    bool primo;
    for(i = 100; i <= 500; i ++){
        primo = true;
        for(j = i - 1; j >= 2; j --){
            if(i%j == 0){
            primo = false;
        }
    }
    if(primo){
            cout << i << " ";
        }
    }
    return 0;
}
