#include <iostream>
#include <conio.h>

using namespace std;
#define size 15

int hashfun(int x){
    return (x % 10);
}

int main(){
    // clrscr();
    int hashtable[size], arr[size], i, n, key;
    cout << "Enter size of array: ";
    cin >> n;

    for (i = 0; i < size; i++){
        hashtable[i] = -1;
    }
    
    cout << "Enter the array elements : ";
    for (i = 0; i < n; i++)
        cin >> arr[i];

    for (i = 0; i < n; i++){
        key = hashfun(arr[i]);
        hashtable[key] = arr[i];
    }

    cout << "The Hashtable is: " << endl;
    for (i = 0; i < size; i++)
        cout << hashtable[i] << endl;

    return 0;
}
