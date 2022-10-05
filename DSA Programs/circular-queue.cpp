#include <conio.h>
#include <iostream>

using namespace std;

void insert();
void del();
void display();
int que[20], i, n, ele, fr = -1, re = -1;
int main()
{
  // clrscr ();
  int ch, rep;
  cout << "Enter the max size of the queue: ";
  cin >> n;
  do
  {
    cout << "Enter Choice:\n1-Insert\n2-Delete\n3-Display:\t";
    cin >> ch;
    switch (ch)
    {
    case 1:
      cout << "Enter the element you want to insert: ";
      cin >> ele;
      insert();
      break;
    case 2:
      del();
      break;
    case 3:
      display();
      break;
    default:
      cout << "Invalid Input. ";
    }
    cout << "Do ypu want to continue?[1-Yes||0-No]: ";
    cin >> rep;
  } while (rep);
  getch();
  return 0;
} 

void insert()
{
  if ((re + 1) % n == fr)
  {
    cout << "Overflow:Cannot insert another element.";
    return;
  }
  else if (fr == -1 && re == -1)
  {
    fr = 0; //---for first ele
    re = 0;
    que[re] = ele;
  }
  else
  {
    re = re + 1 % n;

    que[re] = ele;
  }
}

void display()
{
  if (fr == -1)
    fr = 0;
  cout << "Empty Queue" << endl;
  for (i = fr; i <= re; i++)
    cout << que[i] << "\t";
}

void del()
{
  if (fr == re) // only one element left
  {
    fr = -1;
    re = -1;
  }
  if (fr == -1 && re == -1)
  {
    cout << "Underflow.";
    return;
  }
  else
    fr = fr + 1 % n;
}
