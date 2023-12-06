#include <iostream>
using namespace std;
const int MAX_N = 100;
const int MAX_M = 100;

int main() {
    int n, m;
    cin >> n >> m;

    
    int A[MAX_N][MAX_M];
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> A[i][j];


    int B[MAX_M][MAX_N];
    for (int i = 0; i < m; ++i)
        for (int j = 0; j < n; ++j)
            B[i][j] = A[j][i];


    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j)
            cout << B[i][j] << " ";
        cout << endl;
    }
}
