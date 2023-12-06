#include <iostream>
using namespace std;

int main() {
  int e, n1, m, q;
  cin >> m >> e;
  float arrA[m][e];
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < e; j++)
    {
      cin >> arrA[i][j];
    }
  }

  cin >> n1 >> q;
  if (e!= n1)
  {
    cout << -1;
    return 0;
  }
  e = n1;
  
  float arrB[e][q];
  for (int i = 0; i < e; i++)
  {
    for (int j = 0; j < q; j++)
    {
      cin >> arrB[i][j];
    }
  }

  float arrC[m][q], sum=0;
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      sum=0;
      for (int r = 0; r < e; r++)
      {
        sum += arrA[i][r] * arrB[r][j];
      }
      arrC[i][j] = sum;
    }
  }
  cout << m << " " << q << '\n';
  for (int i = 0; i < m; i++)
  {
    for (int j = 0; j < q; j++)
    {
      cout << arrC[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}