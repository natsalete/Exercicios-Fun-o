#include<iostream>
#include <math.h>

using namespace std;

// 3. Crie uma função capaz de receber 1 número n qualquer e imprimir todos os números de 1
// a n.

 void numero(int n){
    for(int i = 1; i <= n; i++){
        cout << i << endl;
    }
    return ;
}


int main(){

    int n;

    cin >> n;

    numero(n);



    return 0;
}


