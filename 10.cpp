#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n][n];
    int num = 1;

    for (int d = 0; d < 2 * n-1; d++)
    {
    if (d % 2 != 0)
    {
        int i, j;
        if (d < n)
        {
        i = d;
        j = 0;
        }
        else {
        i = n - 1;
        j = d - n + 1;
        }
        while (i >= 0 && j < n)
        {
        arr[i--][j++] = num++;
        }
    }
    else {
        int j, i;
        if (d < n)
        {
        j = d;
        i = 0;
        } else {
        j = n - 1;
        i = d - n + 1;
        }
        while (j >= 0 && i < n)
        {
        arr[i++][j--] = num++;
        }
    }
    }

    for (int i = 0; i < n; i++)
    {
    for (int j = 0; j < n; j++)
    {
        cout << arr[i][j] << " ";
    }
    cout << "\n";
    }
    return 0;
}