#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int a, b, res=1, sim=0; 
    cin >> a >> b;
    int old[a][b], me[a][b], count=a;
    for (int i = a-1; i >= 0; i--) {
        for (int j = 0; j < b; j++) {
            old[i][j] = res;
            res++;
        }
    }

    for (int i = 0; i < a; i++) {
        int hello = count;
        for (int j = 0; j < b; j++) {
            me[i][j] = hello;
            if (me[i][j] == old[i][j]) {
                sim++;
            }
            hello+=a;
        }
        count--;
    }
    
    cout << sim;
}
