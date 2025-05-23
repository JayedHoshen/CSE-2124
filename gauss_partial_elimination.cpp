// Gauss Elimination with Partial pivoting
#include <bits/stdc++.h>
using namespace std;

int main()
{   
    cout << "\nEnter number of unknowns = ";
    int n; cin >> n;

    double a[n][n+1], x[n], ratio;
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n+1; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j]; 
        }
    }

    for (int i = 0; i < n; i++) {
        int maxRow = i;
        for (int k = i + 1; k < n; k++) {
            if (fabs(a[k][i]) > fabs(a[maxRow][i])) maxRow = k;
        }
        for (int j = 0; j <= n; j++) swap(a[i][j], a[maxRow][j]);
        if (fabs(a[i][i]) < 1e-10) {
            cout << "Mathematical error! Pivot is zero.\n";
            return 0;
        }
        for (int k = i + 1; k < n; k++) {
            double factor = a[k][i] / a[i][i];
            for (int j = i; j <= n; j++) a[k][j] -= factor * a[i][j];
        }
    }

    for (int i = n-1; i >= 0; i--) {
        x[i] = a[i][n];
        for (int j = i+1; j < n; j++) x[i] -= a[i][j] * x[j];
        x[i] /= a[i][i];
    }

    cout << "\nSolution----------\n";
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}