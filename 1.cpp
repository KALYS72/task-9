#include <iostream>
#include <limits>
using namespace std;

int main() {
    int a, b, c, res=0;
    cin >> a;
    b=a; c=a;
    int num[b][c];
    for (int i = 0; i < a; i++) {
        for (int b = 0; b < a; b++) {
            int c;
            cin >> c;
            num[i][b] = c;
            if (c > 0) {
                res += c;
            }
        }
    }
    cout << res;
}