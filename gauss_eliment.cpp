// Basic Gauss Elimination method
#include <bits/stdc++.h>
using namespace std;

int main()
{
    double a[100][100], x[100], ratio;

    cout << "Enter number of unknowns = ";
    int n; cin >> n;
    
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n+1; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j]; 
        }
    }

    for(int i = 1; i <= n-1; i++) {
        if(a[i][i] == 0.0) {
            cout << "Mathematical errro!\n";
            return 0;
        }

        for(int j = i+1; j <= n; j++) {
            ratio = a[j][i] / a[i][i];

            for(int k = 1; k <= n+1; k++) {
                a[j][k] = a[j][k] - ratio * a[i][k];
            }
        }
    }

    x[n] = a[n][n+1] / a[n][n];

    for(int i = n-1; i >= 1; i--) {
        x[i] = a[i][n+1];
        for(int j = i+1; j <= n; j++) x[i] = x[i] - a[i][j] * x[j];
        x[i] = x[i]/a[i][i];
    }

    cout << "\nSolution----\n";
    for(int i = 1; i <= n; i++) cout << "x[" << i << "] = " << setprecision(3) << x[i] << '\n';
   
    return 0;
}