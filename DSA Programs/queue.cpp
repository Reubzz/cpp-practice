#include<iostream.h>
#include<conio.h>

int que[10], f = -1, r = -1, i, n, ele;

void insert ();
void del ();
void display ();

void
main ()
{
  int ch, res, p;
  cout << "enter the size of the queue:" << endl;
  cin >> n;
  p = 1;
  while (p)
    {
      cout << "select any one option 1.insert\n2.delete\n3.display" << endl;
      cin >> ch;
      switch (ch)
	{
	case 1:
	  cout << "Enter the number you want";
	  cin >> ele;
	  insert ();
	  break;
	case 2:
	  del ();
	  break;
	case 3:
	  display ();
	  break;

	default:
	  cout << "invalid input!!" << endl;
	  break;
	}
      cout << "do you want to continue 1=yes,0=no" << endl;
      cin >> p;

    }
}

void
insert ()
{
  if (r == (n - 1))
    {
      cout << "stack overflow";
      return;
    }
  if (f == -1)
    f = 0;			//  in case of first ele

  r++;
  que[r] = ele;

}

void
del ()
{
  if (f == -1)
    {
      cout << "stack underflow" << endl;
      return;
    }
  cout << endl << "the deleted element" << que[f];

  if (f == r)			//-----------met at same position
    {
      f = -1;
      r = -1;
    }
  // if(f==n-1)f=-1;
  else
    f++;
}

void
display ()
{
  cout << "queue:" <<<< "F->" << f << " , " <<<< "R->" r << endl;
  if (f == r == -1)
    return;
  for (i = f; i <= r; i++)
    {
      cout << que[i] << " , ";
    }
  return;
}
