#include<iostream>
#include <math.h>

using namespace std;

// 10. Faça uma função capaz de receber dois números a e b, onde o primeiro sempre é menor
// que o segundo, e calcula a soma dos números pares compreendidos entre os dois números
// lidos.

int soma(int a, int b){
    int soma = 0;
    if(a > b){
        return 0;
    }else {
        for(int i = a; i < b; i++){
            if(i % 2 == 0){
                soma += i;
            }
        }
    }
    return soma;
}


int main(){

    int a, b;

    cin >> a >> b;

    int result = soma(a, b);

    cout << result << endl;

    return 0;
}


