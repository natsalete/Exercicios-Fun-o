#include<iostream>
#include <math.h>

using namespace std;

// 5. Crie uma função capaz de determinar a soma dos n primeiros termos de uma P.A. A soma
// dos n primeiros termos de uma P.A.
// É necessário receber o primeiro elemento, o n-ésimo elemento e o valor de n.

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


