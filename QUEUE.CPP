// Cyclic Queue

#include <iostream>
#include <conio.h>

using namespace std;

void ins(int);
void del();
void display();

int que[30], f = -1, r = -1, i, n, elem;
int main()
{
  // clrscr();
  int ch, x;

  cout << "\nWhat is the Size of the Queue : ";
  cin >> n;
  x = 1;
  while (x)
  {
    // clrscr();
    cout << "\n\tMenu";
    cout << "\n1. Insert\n2. Delete\n3. Display\n\nEnter your Choice : ";
    cin >> ch;
    switch (ch)
    {
    case 1:
      cout << "\n\nEnter the Number to insert : ";
      cin >> elem;
      ins(elem);
      break;
    case 2:
      del();
      break;
    case 3:
      display();
      break;
    default:
      cout << "Err || Wrong Choice";
    }

    cout << "\n\n Do you want to continue? (1 = Yes / 0 = No) : ";
    cin >> x;
  }
  return 0;
}

void ins(int k)
{
  if ((r+1)%n == f)
  {
    cout << "Err || Queue Overflow";
    return;
  }
  else if (f == -1 && r == -1){
    f = 0;
    r = 0;
    que[r] = k;
  }
  else {
    r = (r+1)%n;
    cout << "\nCurrently Rear = " << r << "\nCurrently Front = " << f;
    que[r] = k;
  }
}

void del()
{
  if (f == -1 && r == -1)
  {
    cout << "Err || Queue Underflow";
    return;
  }
  cout << "The deleted element is : " << que[f];
  que[f] = 0;
  if (f == r)
  {
    f = -1;
    r = -1;
  }
  else
    f = (f+1)%n;
  cout << "\nCurrently Rear = " << r << "\nCurrently Front = " << f;
}

void display()
{

  for (i = 0; i < n; i++)
  {
    cout << que[i] << ", ";
  }
  cout << "\n\tCurrently Rear = " << r << "\n\tCurrently Front = " << f;
}