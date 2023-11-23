#include<iostream>
#include <math.h>

using namespace std;

double soma(double n, double a1, double an){
    double soma = 0;
    soma = ((n *(a1 + an)))/ 2;
    return  soma;
}


int main(){

    double n, a1, an;

    cin >> n >> a1 >> an;

     double result = soma(n, a1, an);

    cout << result << endl;

    return 0;
}


