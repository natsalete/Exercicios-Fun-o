#include<iostream>
#include <math.h>

using namespace std;

int numero(int a, int b, int c){
    int soma = 0;
    if(a % 2 == 0){
    soma += 1;
    }

    if(b % 2 == 0){
    soma += 1;
    }

    if(c % 2 == 0){
    soma += 1;
    }

    return  soma;
}


int main(){

    int a, b, c;

    cin >> a >> b >> c;

     int result = numero(a, b, c);

    cout << result << endl;

    return 0;
}


