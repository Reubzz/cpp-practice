#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
  // clrscr();
  int i, j, n, m, nonZero = 0;
  int name;
  int mat[10][10], matB[10][10];
  cout << "Enter the Number of rows" << endl;
  cin >> n;
  cout << "Enter the Number Of coloumns" << endl;
  cin >> m;

  cout << "Enter the matrix value" << endl;

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cout << "Enter element for a" << i + 1 << j + 1 << ":" << endl;
      cin >> mat[i][j];
    }
  }

  for (i = 0; i < n; i++)
  {
    for (j = 0; j < m; j++)
    {
      cout << mat[i][j] << " ";
      if (mat[i][j] != 0)
        nonZero++;
    }
    cout << endl;
  }

  int zeros = (n * m) - nonZero;
  if (nonZero > (n * m / 2))
    cout << "total no. of non zero elements are " << nonZero << " and Zeros are " << zeros << " Hence,it is not sparse matrix" << endl;
  else
    cout << "total no of non zero elements are " << nonZero << " and Zeros are " << zeros << " Hence,its is a sparse matrix" << endl;
  getch();

  return 0;
}
