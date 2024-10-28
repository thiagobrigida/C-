#include <iostream>
#include <math.h>


using namespace std;

int binarioIterativo(unsigned long long int N){
    int e = 0;
    int res = 0;
    while(N / 10 > 0){
        res += N%10*pow(2, e);
        e++;
        N /= 10;
    }
    res += N%10*pow(2,e);
    return res;


}

int binarioRecursivo(unsigned long long int N, int e){
    if(N / 10 == 0){
        return N%10*pow(2,e);
    return (N%10*pow(2, e))+binarioRecursivo(N/10, ++e);
    }

}


int main()
{

    return 0;
}
