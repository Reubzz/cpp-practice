#include<iostream.h>
#include<conio.h>

void
main ()
{
  clrscr ();
  int i, j, n, x, m, count = 1, val = 0;
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
	    {
	      matB[count][0] = i;
	      matB[count][1] = j;
	      matB[count][2] = mat[i][j];
	      count = count + 1;
	      val = val + 1;
	    }
	}
    }


  matB[0][0] = n;
  matB[0][1] = m;
  matB[0][2] = val;
  cout << "entered matrix is" << endl;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  cout << mat[i][j] << "  ";
	}
      cout << endl;
    }


  cout << "sparse matrix is " << endl;
  for (i = 0; i < count; i++)
    {
      for (j = 0; j < 3; j++)
	{
	  cout << matB[i][j] << "  ";
	}
      cout << endl;
    }
  getch ();
}
