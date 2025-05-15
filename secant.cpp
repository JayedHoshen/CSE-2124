// Secant method c++ code
#include <bits/stdc++.h>
using namespace std;
double f(double x) { return (x*x - 4*x -10);}
int main(){
    double x1, x2, x3, f1, f2, f3, e;
    cout << "\nEnter two initial guess = "; cin >> x1 >> x2;    
    cout << "Enter tolerable error = "; cin >> e;    
    cout << "\nIteration\t" << "x1\t\t" << "x2\t\t" << "x3\t\t" << "f(x3)\n";
    int it = 1;
    while(1) {
        f1 = f(x1);
        f2 = f(x2);
        x3 = (f2*x1 - f1*x2) / (f2 - f1);        
        cout << it++ << "\t\t"  << x1 << "\t\t" << x2 << "\t\t" << x3 << "\t\t" << f(x3) << '\n';
        if(abs((x3-x2) / x3) > e) {
            x1 = x2;
            f1 = f2;
            x2 = x3;
            f2 = f(x3);
        }
        else { cout << "\nRoot is = " << x3 << "\n\n"; break; }        
    }
    return 0;
}