#include<iostream>
#include <math.h>

using namespace std;

// 2. Crie uma função capaz de receber 2 números x e y, e retornar qual dos dois é maior.

double maior(double x, double y){
    double maior = 0;
     if(x > y){
       maior  = x;
     }else {
        maior = y;
     }
    return maior;
}


int main(){

    double x, y;

    cin >> x >> y;

    double result = maior(x, y);

    cout << result << endl;


    return 0;
}

