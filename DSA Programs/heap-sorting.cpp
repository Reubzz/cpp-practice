#include <iostream>
#include <conio.h>

using namespace std;

void displayarr(int *, int);

void heapSort(int[], int);

void heapify(int[], int, int);

void main()

{
    int arr[20], n, i;

    cout << endl
         << " How many values are there ? :";

    cin >> n;

    cout << endl
         << " Enter the values :";

    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << endl
         << " Given array :";

    displayarr(arr, n);

    heapSort(arr, n);

    cout << endl
         << "Sorted array  : ";

    displayarr(arr, n);
}

void displayarr(int arr[], int n)

{
    for (int i = 0; i < n; i++)
        cout << arr[i] << ",";
}

void heapSort(int arr[], int n)

{
    int temp;
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    for (int i = n - 1; i >= 0; i--)

    {
        temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;
        heapify(arr, i, 0);
    }
}

void heapify(int arr[], int n, int i)

{
    int temp;
    int largest = i; // Initialize largest as root

    int l = 2 * i + 1;

    int r = 2 * i + 2;

    if (l < n && arr[l] > arr[largest])
        largest = l;
    if (r < n && arr[r] > arr[largest])
        largest = r;
    if (largest != i)
    {
        temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;
        heapify(arr, n, largest);
    }
}
