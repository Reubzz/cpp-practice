#include<iostream.h>
#include<conio.h>

void
main ()
{
  clrscr ();
  int i, j, n, m, count = 0;
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
	  if (mat[i][j] != 0)
	    count++;

	}
    }


  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	{
	  cout << mat[i][j] << " ";
	}
      cout << endl;
    }

  cout <<
    "do you want to check whether the matrix is sparse or not 1=Yes,0=No" <<
    endl;
  cin >> x;

  if (count > n * m / 2)
    cout << "total no of non zero elements are " << count <<
      " Hence,it is not sparse matrix" << endl;
  else
    cout << "total no of non zero elements are " << count <<
      " Hence,its is a sparse matrix" << endl;
  getch ();
}
