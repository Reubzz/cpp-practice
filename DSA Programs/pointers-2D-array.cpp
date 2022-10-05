#include<iostream.h>
#include<conio.h>

void
main ()
{
  clrscr ();
  int i, j, n, m;
  int **mat;
  cout << "enter the number of rows andd coloumns u want in the matrix " <<
    endl;
  cin >> n >> m;


  cout << "enter the matrix value" << endl;

  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	{
	  cin >> mat[i][j];
	}
    }
  cout << "entered matrix" << endl;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < m; j++)
	{
	  cout << *(*(mat + i) + j) << "  ";
	}
      cout << endl;
    }
  getch ();
}
