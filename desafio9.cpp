#include<iostream>
#include <math.h>

using namespace std;

// 9. Faça uma função capaz de receber três números a, b e c, e imprimir as duas raízes da
// equação do segundo grau. Se a função tem apenas uma raiz, imprimir apenas essa raiz. Se
// não tiver raiz, imprima não existem raízes.

void equacao(int a, int b, int c){
    int delta = pow(b,2) - 4 * a *c;

    if(delta > 0){
        double x1 = (-(b) + sqrt(delta)) / (2 * a);
        cout << x1 << endl;
        double x2 = (- (b) - sqrt(delta)) / (2 * a);
        cout << x2 << endl;

    }else if (delta = 0){
        double x = ((- b) + delta) / (2 * a);
        cout << x << endl;
    }else {
        cout << "Nao existem raizes." << endl;
    }
}


int main(){

    int a, b, c;

    cin >> a >> b >> c;

    equacao(a, b, c);


    return 0;
}


