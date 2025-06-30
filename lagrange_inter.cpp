// Curve fitting using Lagrange interpolation polynomial
#include <bits/stdc++.h>
using namespace std;

int main() {
    double x[100], y[100], xp, yp = 0, p;

    cout << "Enter number of data = "; int n; cin >> n;

    cout << "Enter your data ---\n";
    for (int i = 1; i <= n; i++) {
        cout << "x[" << i << "] = "; cin >> x[i];
        cout << "y[" << i << "] = "; cin >> y[i];
    }

    cout << "Enter interpolation point = "; cin >> xp;

    for (int i = 1; i <= n; i++) {
        p = 1;
        for (int j = 1; j <= n; j++) {
            if (i != j) p *= (xp - x[j]) / (x[i] - x[j]);
        }
        yp += p * y[i];
    }
    cout << "\nInterpolated value at " << xp << " is " << yp << endl;

    return 0;
}
