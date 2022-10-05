#include<iostream.h>
#include<conio.h>

void
main ()
{
  clrscr ();
  int n, ele, i, j, e, a, b, adjmat[10][10];
  cout << "how many nodes are there " << endl;
  cin >> n;
  cout << "how many edges are there ";
  cin >> e;

  for (i = 0; i < n; i++)
    for (j = 0; j < n; j++)
      adjmat[i][j] = 0;

  for (i = 0; i < e; i++)
    {
      cout << "enter the nodes as [n1] [n2]" << endl;
      cin >> a >> b;
      adjmat[a][b] = 1;
    }



  cout << "the adjancey matrix is" << endl;
  for (i = 0; i < n; i++)
    {
      for (j = 0; j < n; j++)
	cout << adjmat[i][j] << " ";
      cout << endl;
    }
  getch ();
}
