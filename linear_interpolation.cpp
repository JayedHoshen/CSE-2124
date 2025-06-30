// Curve fitting using linear interpolation
#include <bits/stdc++.h>
using namespace std;

double f(double x) { 
    return sqrt(x); 
}

int main()
{
    double x1, x2, x, fx;

    cout << "Enter value of x1 and x2 = ";
    cin >> x1 >> x2;

    cout << "Enter value of x = ";
    cin >> x;

    fx = f(x1) + (x-x1) * ((f(x2)-f(x1)) / (x2-x1));

    cout << "Value of function is = " << fx << endl;

    return 0;
}