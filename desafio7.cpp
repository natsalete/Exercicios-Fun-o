#include<iostream>

using namespace std;

// 7. Faça uma função capaz de receber 3 números e retornar a soma do maior com o menor
// número.

double lados(double a, double b, double c){
    double maior, menor;

    if(a > b && a > c){
      maior = a;
    }else if(b > a && b > c){
        maior = b;
    }else {
        maior = c;
    }

    if(a < b && a < c){
        menor = a;
    }else if(b < a && b < c){
        menor = b;
    }else{
        menor = c;
    }
    int soma = maior + menor;

    return soma;
}


int main(){

    double a, b, c;

    cin >> a >> b >> c;

    double result = lados(a, b, c);

    cout << result << endl;

    return 0;
}


