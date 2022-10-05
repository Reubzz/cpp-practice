#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
  // clrscr();
  int arr[30], n, i, j, k;
  cout << "How many elements are there?";
  cin >> n;
  cout << "The list of array elements is:";
  for (i = 0; i < n; i++)
    cin >> arr[i];

  for (int i = 1; i < n; i++)
  {
    k = arr[i];
    int j = i - 1;
    while (j >= 0 && arr[j] > k)
    {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = k;
  }

  cout << "Array After Sorting using 'Insertion Sort Algorithm':\n";
  for (i = 0; i < n; i++)
    cout << arr[i] << ",";

  getch();
  return 0;
}
