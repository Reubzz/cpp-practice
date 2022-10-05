#include <iostream>
#include <conio.h>

using namespace std;

int hashfun(int x){
    return (x % 10);
}

int main(){
    // clrscr();
    int hashtable[10], arr[10], i, n, key;
    cout << "Enter size of array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    for (i = 0; i < n; i++){
        hashtable[i] = -1;
    }
    for (i = 0; i < n; i++)
        cin >> arr[i];

    cout << "Enter the elements" << endl;
    for (i = 0; i < n; i++){
        key = hashfun(arr[i]);
        hashtable[key] = arr[i];
    }

    cout << "The Hashtable is: " << endl;
    for (i = 0; i < n; i++)
        cout << hashtable[i] << endl;

    return 0;
}
