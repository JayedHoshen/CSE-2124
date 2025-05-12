#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return (x*x - 3*x + 2);
}

double df(double x) {
    return (2*x - 3);
}

int main()
{
    double x, x1, f1, f2, e;

    cout << "Enter initial value and Precision = ";
    cin >> x >> e;
    
    int i = 1;
    while(1) {
        f1 = f(x);
        f2 = df(x);
        x1 = x - f1 / f2;
        
        if(abs((x1-x) / x1) <= e) break;
        x = x1;
        cout << i++ << " Current root: " << x << "\n";
    }
    cout << "Final root = " << x1 << '\n'; 

    return 0;
}