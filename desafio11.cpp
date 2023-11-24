#include<iostream>
#include <math.h>

using namespace std;

// 11. Faça uma função que receba um número positivo e imprima todos os seus divisores.
// Exemplo: os divisores do número 66 são: 1, 2, 3, 6, 11, 22, 33 e 66.

void divisores(int a){
    cout << "Os divisores do numero ", a, " são: ";
    for(int i = 1; i < a; i++){
        if(a % i == 0){
            cout << i << ", ";
        }
    }
    cout << a << "." << endl;
}


int main(){

    int a;

    cin >> a;

    divisores(a);


    return 0;
}



