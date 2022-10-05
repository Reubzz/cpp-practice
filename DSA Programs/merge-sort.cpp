#include <iostream.h>
#include<conio.h>
      //  Merge Sort

void merge (int *, int, int, int);	//----- to merge the arrays

void mergeSort (int *, int, int);	//------ to split the arrays 


void
main ()
{
  int arr[50], i, n;
  cout << endl << " How many values are there ? ";
  cin >> n;
  cout << endl << " Enter those values : ";
  for (i = 0; i < n; i++)
    cin >> arr[i];

  cout << " Given array is : ";
  for (i = 0; i < n; i++)
    cout << arr[i] << " , ";

  mergeSort (arr, 0, n - 1);	//-  function call for merge sort 

  cout << endl << "The sorted array is :";
  for (i = 0; i < n; i++)
    cout << arr[i] << " , ";

}				//------------------------------------------ end of main


void
merge (int arr[], int l, int m, int r)
{
  int i, j, k;

  int n1 = m - l + 1;
  int n2 = r - m;

  int L[20];
  int R[20];


  for (i = 0; i < n1; i++)
    L[i] = arr[l + i];

  for (j = 0; j < n2; j++)
    R[j] = arr[m + 1 + j];

  i = 0;
  j = 0;
  k = l;

  while (i < n1 && j < n2)
    {
      if (L[i] <= R[j])
	{
	  arr[k] = L[i];
	  i++;

	}

      else
	{
	  arr[k] = R[j];
	  j++;
	}

      k++;

    }


  while (i < n1)
    {
      arr[k] = L[i];
      i++;

      k++;
    }

  while (j < n2)
    {
      arr[k] = R[j];

      j++;

      k++;
    }

}


void
mergeSort (int arr[], int l, int r)
{				//--- recursive function 
  if (l < r)
    {
      int m = l + (r - l) / 2;
      // cout<<endl<<" the left half array split :" ; 
      mergeSort (arr, l, m);	//-------------  splitting the left half of the array 
//cout<<endl<<" the right half array split :" ; 
      mergeSort (arr, m + 1, r);	//----- splitting the right half of the array 

      merge (arr, l, m, r);
    }

}
