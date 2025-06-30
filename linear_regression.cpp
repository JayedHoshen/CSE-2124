// Curve fitting using Linear Regression
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    cout << "Enter number of data points = ";
    int n; cin >> n;

    double x[n], y[n];
    double sumX = 0, sumY = 0, sumXY = 0, sumX2 = 0;

    cout << "\nEnter values of x and y ------------\n";
    for (int i = 0; i < n; i++) {
        cout << "x[" << i + 1 << "] = "; cin >> x[i];
        cout << "y[" << i + 1 << "] = "; cin >> y[i];

        sumX += x[i];
        sumY += y[i];
        sumXY += x[i] * y[i];
        sumX2 += x[i] * x[i];
    }

    double d = n * sumX2 - sumX * sumX;
    if (d == 0) {
        cout << "\nDenominator is zero. So, cannot compute regression line.\n";
        return 0;
    }

    double b = (n * sumXY - sumX * sumY) / d;
    double a = (sumY - b * sumX) / n;

    cout << "\nThe linear regression equation is ----------\n";
    cout << "y = " << a << " + " << b << "x\n";

    return 0;
}