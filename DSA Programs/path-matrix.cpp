#include<iostream.h>

#include<conio.h>


void
main ()
{
  clrscr ();

  int i, j, n, k;

  int path[10][10], adj[10][10];

  cout << "Enter the Number of nodes" << endl;

  cin >> n;

  cout << "Enter the adjacency matrix" << endl;

  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	{
	  cout << "enter element for a" << i + 1 << j + 1;
	  cin >> adj[i][j];
	  path[i][j] = adj[i][j];
	}
    }



  for (k = 0; k < n; k++)
    {
      for (i = 0; i < n; i++)
	{
	  for (j = 0; j < n; j++)
	    {
	      path[i][j] = path[i][j] || (path[i][k] && path[k][j]);
	    }

	}
    }



  cout << "The path matrix is" << endl;

  for (i = 0; i < n; i++)

    {
      for (j = 0; j < n; j++)

	{
	  cout << path[i][j] << "  ";

	}

      cout << endl;

    }

}
