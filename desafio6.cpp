#include<iostream>


using namespace std;

// 6. Faça uma função capaz de receber dois números b e h que representam os lados de um
// retângulo ou quadrado, e retornar 1 se ele for um quadrado ou 0 se for um retângulo.

void lados(double b, double h){
    if(b == h){
        cout << 1 << endl;
    }else{
        cout << 0 << endl;
    }
}


int main(){

    double b ,h;

    cin >> b >> h;

    lados(b, h);


    return 0;
}


