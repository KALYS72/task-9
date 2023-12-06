#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a, b, res = 0;
    cin >> a >> b;
    int num[a][b];
    int mun[a][b];
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            int k;
            cin >> k;
            num[i][j] = k;
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            int k;
            cin >> k;
            mun[i][j] = k;
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            if (mun[i][j] == 1) {
                res += num[i][j];
            }
        }
    }
    cout << res;
}