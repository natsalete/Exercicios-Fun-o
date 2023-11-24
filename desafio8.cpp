#include<iostream>
#include <math.h>

using namespace std;

// 8. Supondo um emprestimo no valor de c Reais, por m meses a juros de t% ao mes, crie
// uma funcao capaz de descobrir os juros cobrados nesse emprestimo. A formula para
// calculo dos juros simples e a que se segue: j = c * m * t.

double emprestimo(double c, double m, double t){
    double j;
    j = c * m * t;
    return j;
}


int main(){

    double c, m, t;

    cin >> c >> m >> t;

    int result = emprestimo(c, m, t);

    cout << result << endl;
    return 0;
}


