#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a1, a2, a3, b1, b2, b3, x, y;

    
    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;

    
    double determinant = a1 * b2 - a2 * b1;

   
    x = (b2 * a3 - a2 * b3) / determinant;
    y = (a1 * b3 - b1 * a3) / determinant;

    cout << fixed << setprecision(3) << x << endl << y;
    

}
