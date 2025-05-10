// False position method c++ code
#include <bits/stdc++.h>
using namespace std;

double f(double x) {return (x*x - x*4 - 10);}

int main() {
    double x0, x1, x2, f0, f1, f2, e;

    cout << "\nEnter two initial guesses: ";
    cin >> x1 >> x2;

    cout << "\nEnter tolerable error: ";
    cin >> e;

    while (true) {
        f1 = f(x1); 
        f2 = f(x2);
        x0 = x1 - (f1*(x2 - x1)) / (f2 - f1);
        f0 = f(x0);

        if(abs(f0) < e) {
            cout << "\nApproximate Root = " << x0 << endl << endl;
            break;
        }
        if (f1*f0 < 0) x2 = x0;
        else x1 = x0;
    }  

    return 0;
}