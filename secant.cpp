#include <bits/stdc++.h>
using namespace std;

double f(double x) {
    return (x*x - 4*x -10);
}

int main()
{
    double x1, x2, x3, f1, f2, f3, e;

    cout << "Enter two initial value = ";
    cin >> x1 >> x2;
    
    cout << "Precision = ";
    cin >> e;
    
    while(1) {
        f1 = f(x1);
        f2 = f(x2);
        x3 = (f2*x1 - f1*x2) / (f2 - f1);
        
        if(abs((x3-x2) / x3) > e) {
            x1 = x2;
            f1 = f2;
            x2 = x3;
            f2 = f(x3);
        }
        else {
            cout << "Root is = " << x3 << "\n";
            break;
        }
        
    }

    return 0;
}