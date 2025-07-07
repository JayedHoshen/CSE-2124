#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return x*x;
}

int main()
{
    double fx_fr, fx_bc, fx_ce, x, h, n;

    cout << "Enter value of x = "; cin >> x;
    cout << "Enter number of h = "; cin >> n;

    int hp = 1;
    for(int i = 0; i < n; i++) {
        cout << "\nEnter value of h" << hp++ << " = "; cin >> h;
        x = x;

        fx_fr = (f(x+h) - f(x)) / h;
        fx_bc = (f(x)-f(x-h)) / h;
        fx_ce = (f(x+h) - f(x-h)) / (2*h);

        cout << "\nForward Difference = " << fx_fr << endl;
        cout << "Backward Difference = " << fx_bc << endl;
        cout << "Central Difference = " << fx_ce << endl;
        cout << '\n';
    }

    return 0;
}
