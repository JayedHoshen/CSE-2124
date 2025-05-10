// Bisection method c++ code
#include <bits/stdc++.h>
using namespace std;

double f(double x) {return (x*x - x*4 - 10);}

int main() {
    double x0, x1, x2, f0, f1, f2, e;

    while (true) {
        cout << "\nEnter two initial guesses: ";
        cin >> x1 >> x2;

        cout << "\nEnter tolerable error: ";
        cin >> e;

        f1 = f(x1); f2 = f(x2);
        if (f1*f2 > 0) cout << "\nIncorrect Initial Guesses.\n"; 
        else break;
    }

    while (x2-x1 >= e){
        x0 = (x1 + x2) / 2; f0 = f(x0);
        if (f1*f0 < 0 || f0 == 0.0) x2 = x0;
        else x1 = x0;
    }
    cout << "\nApproximate Root = " << x0 << endl << endl;

    return 0;
}
