#include <iostream>


void displayarr(int* , int);
void heapSort(int[] ,int);
void heapify(int[] , int , int);

int main() 
{ 
    int arr[20],n,i;

cout<<endl<<" How many values are there ? :";
cin>>n;
cout<<endl<<" Enter the values :";
for(i=0;i<n;i++) cin>>arr[i];       

cout<<endl<<" Given array :";
displayarr(arr,n);

    heapSort(arr, n); 
  
cout <<endl<< "Sorted array  : " ;
    displayarr(arr, n);
    
    } 


void displayarr( int arr[] , int n)
{ for(int i=0;i<n;i++) cout<<arr[i]<<"," ; }

void heapSort(int arr[], int n) 
{ 
       for (int i = n / 2 - 1; i >= 0; i--) 
        heapify(arr, n, i); 
  
       for (int i=n-1; i>0; i--) 
    { 
                swap(arr[0], arr[i]); 
  
                heapify(arr, i, 0); 
    } 
} 

void heapify(int arr[], int n, int i) 
{ 
    int largest = i;          // Initialize largest as root 
    int l = 2*i + 1; 
    int r = 2*i + 2;  
  
    if (l < n && arr[l] > arr[largest]) 
        largest = l; 
      
    if (r < n && arr[r] > arr[largest]) 
        largest = r; 
  
        if (largest != i) 
    { 
        swap(arr[i], arr[largest]); 
  
                heapify(arr, n, largest); 
    } 
} 
