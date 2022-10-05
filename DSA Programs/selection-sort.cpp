#include<iostream.h>
#include<conio.h>
void
main ()
{
  int arr[30], i, j, n, lea, pos;
  cout << "How many Values: ";
  cin >> n;
  cout << endl << "Enter the elements you want to sort: ";
  for (i = 0; i < n; i++)
    cin >> arr[i];
//****************Sorting
  for (i = 0; i < n - 1; i++)
    {
      lea = arr[i];
      pos = i;
      for (j = i + 1; j < n; j++)
	if (lea > arr[j])
	  {
	    lea = arr[j];
	    pos = j;

	  }			//Finding least element
      arr[pos] = arr[i];	//swapping least no. with first element
      arr[i] = lea;
    }

  cout << endl << "Sorted Array: ";
  for (i = 0; i < n; i++)
    cout << endl << arr[i];

  getch ();
}
