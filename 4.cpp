#include <iostream>
using namespace std;

int main() {
  int n, count = 0;
  cin >> n;
  int arr[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      arr[i][j] = count+1;
      count++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      for (int j = 0; j < n; j++)
      {
        cout << arr[i][j] << " ";
      }
    }
    else {
      for (int j = n-1; j >= 0; j--)
      {
        cout << arr[i][j] << " ";
      }
    }
    cout << "\n";
  }
  return 0;
}