#include<iostream>
#include <math.h>

using namespace std;

void lados(double b, double h){
    if(b == h){
        cout << 1 << endl;
    }else{
        cout << 2 << endl;
    }
}


int main(){

    double b ,h;

    cin >> b >> h;

    lados(b, h);


    return 0;
}


