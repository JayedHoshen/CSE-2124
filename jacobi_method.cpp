#include <bits/stdc++.h>
using namespace std;
const int N = 100;

int main() {
    int n, maxIterations;
    double A[N][N], b[N], x[N] = {0}, x_new[N], tolerance = 0.00001;

    cout << "Enter the number of equations: "; cin >> n;
    cout << "Enter the coefficients of the matrix A:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) cin >> A[i][j];
    }
    cout << "Enter the RHS array b:" << endl;
    for (int i = 0; i < n; ++i) cin >> b[i];

    int iter = 1;
    while(1) {
        for (int i = 0; i < n; ++i) {
            double sum = b[i];
            for (int j = 0; j < n; ++j) if (j != i) sum -= A[i][j] * x[j];
            x_new[i] = sum / A[i][i];
        }
        double error = 0.0;
        for (int i = 0; i < n; ++i) {
            error += fabs(x_new[i] - x[i]);
            x[i] = x_new[i];
        }
        // cout << "Iteration " << iter++ << " = ";
        // for (int i = 0; i < n; ++i) cout << x[i] << "\t";
        // cout << "\t| Error: " << error << endl;
        iter++;
        if (error < tolerance) {
            cout << "Converged in " << iter << " iterations." << endl; break; 
        }
    }
    cout << "Final solution = ";
    for (int i = 0; i < n; ++i) cout << x[i] << " ";
    cout << endl;

    return 0;
}