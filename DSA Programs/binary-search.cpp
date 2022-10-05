#include <iostream>
#include <conio.h>
using namespace std;
void main()
{
  int arr[50], i, n, ele, beg, end, flg = 0, mid, x, pos = 0;
  // clrscr();
  cout << endl
       << "How many values are there?";
  cin >> n;
  cout << endl
       << "Enter the values in sorted order:";

  for (i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  cout << endl
       << "Enter the element to search:";
  cin >> ele;
  beg = 0, end = n;
  do
  {
    mid = (beg + end) / 2;
    if (arr[mid] > ele)
      end = mid - 1;
    else if (arr[mid] < ele)
      beg = mid + 1;
    else if (arr[mid] == ele)
    {
      pos = mid;

      flg++;
      break;
    }
  } while (beg <= end);

  if (flg == 1)
    cout << endl
         << "Element found! "
         << "at position " << pos;
  else
    cout << endl
         << "Element Not Found!";
  getch();
}
