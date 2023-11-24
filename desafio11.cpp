#include<iostream>
#include <math.h>

using namespace std;

// 9. Faça uma função capaz de receber três números a, b e c, e imprimir as duas raízes da
// equação do segundo grau. Se a função tem apenas uma raiz, imprimir apenas essa raiz. Se
// não tiver raiz, imprima não existem raízes.

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


