#include<iostream>
#include <math.h>

using namespace std;

int delta(int a, int b, int c){
     int delta = pow(b, 2) - 4 * a* c;
    return delta;
}


int main(){

    int a, b, c;

    cin >> a >> b >> c;

    int result = delta(a, b, c);

    cout << result << endl;


    return 0;
}

