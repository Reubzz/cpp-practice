#include<iostream.h>

#include<conio.h>


void
main ()
{
  clrscr ();

  int i, j, n, x, m, k, p, q;

  int mat[10][10], matA[10][10], matB[10][10];

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

	  cin >> matA[i][j];
	}

    }


  cout << "Enter the Number of rows for second matrix" << endl;

  cin >> p;

  cout << "Enter the Number Of coloumns for second matrix" << endl;

  cin >> q;



  cout << "Enter the elements for second matrix" << endl;


  for (i = 0; i < p; i++)

    {
      for (j = 0; j < q; j++)

	{
	  cout << "Enter element for a" << i + 1 << j + 1 << ":" << endl;

	  cin >> matB[i][j];
	}

    }


  for (i = 0; i < n; i++)

    {

      for (j = 0; j < q; j++)

	{
	  mat[i][j] = 0;
	  for (k = 0; k < m; k++)

	    {
	      mat[i][j] += matA[i][k] * matB[k][j];

	    }


	}

    }

  cout << "multiplication of two Entered matrix" << endl;

  for (i = 0; i < n; i++)

    {
      for (j = 0; j < q; j++)

	{
	  cout << mat[i][j] << "  ";

	}

      cout << endl;

    }

}
