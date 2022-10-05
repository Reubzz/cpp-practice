// Bubble sort 
#include<iostream>
#include<conio.h>
using namespace std;

int main(){
    int arr[] = {568, 65, -45, 5, 23, 78, -986, 0, 5};
    int n = 9;
    int temp;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++){
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            cout << "Iteration " << i;
            for(int f=0; f<n; f++)
                cout << "\t" << arr[i];
            cout << "\n -------------- \n";
        } 
    }
    cout << "\nAfter sorting: ";
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";

}