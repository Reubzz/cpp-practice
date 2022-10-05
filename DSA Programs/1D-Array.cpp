#include<iostream> // Change to <iostream.h> in turbo c
#include<conio.h>
using namespace std; // remove in turbo C

int main(){
    int arr[30];
    int i, n, choice;
    // clrscr(); // use only in turbo c

    cout << "Enter max size of the array" << endl;
    cin >> n;

    cout << "Enter the elements in the array" << endl;

    for (i = 0; i < n; i++){
        cin >> arr[i];
    }

    cout << "\nThe list of the given elements" << endl;

    for (i = 0; i < n; i++){

        cout << arr[i] << "  ";
    }

    int x;
    while (x){
        cout << "\npress 1 to get sum and average of the elements" << endl;
        cout << "press 2 to know is there any zero in the array " << endl;
        cout << "press 3 to get the even and odd position elements" << endl;
        cout << "press 4 to get how many total  even and odd elements" << endl;
        cout << "press 4 to display the position where odd element and even element is found" << endl;
        cout << "press 5 to get The position of the even&odd element wheen even&odd number are" << endl;
        cout << "press 6 to modifying the values which are between 35 to 40" << endl;

        cout << "press 7 to Display the range of the array elements" << endl;
        cin >> choice;

        switch (choice){
        case 1:
            int sum = 0;
            int avg = 0;
            cout << "\nThe average of the given elements" << endl;
            for (i = 0; i < n; i++){
                sum = sum + arr[i];
            }
            avg = sum / n;
            cout << avg << "  ";
            cout << "\nThe sum of the given elements" << endl;
            cout << sum << "  ";
            break;

        case 2:
            cout << "\ndisplayinng the odd position element" << endl;

            for (i = 1; i < n; i += 2){

                cout << arr[i] << "  ";
            }
            cout << "\ndisplayinng the even position element" << endl;
            for (i = 0; i < n; i += 2){
                cout << arr[i] << ", ";
            }

            break;

        case 3:
            int even = 0;

            int odd = 0;

            for (i = 0; i < n; i++)

                if (arr[i] % 2 == 0){

                    cout << even++;
                }
                else{
                    cout << odd++;
                }

            cout << "the total even elements are:" << even << endl;

            cout << "the total odd elements are:" << odd << endl;

            break;

        case 4:

            int pos = 0;
            int pes = 0;
            for (i = 0; i < n; i++){
                if (arr[i] % 2 == 0){
                    pos = i;
                    cout << "\nThe position of the even elements where even number are:" << pos;
                }
                if (arr[i] % 2 == !0){
                    pes = i;
                    cout << "\nThe position of the odd elements where odd number are:" << pes;
                }
            }
            break;

        case 5:
            pos = 0;
            int u;
            cout << "enter the elements to search in the array" << endl;
            cin >> u;
            for (i = 0; i < n; i++){
                if (u == arr[i])
                    pos++;
            }
            if (pos > 1)
                cout << "\nThe  elements: " << u << " occours " << pos << " times" << endl;
            else if (pos < 1)
                cout << "element not found" << endl;
            else
                cout << "The  elements you entered is not repeated" << endl;

            break;
        case 6:
            int d[30];
            cout << "modifying the values which are between 35 to 40" << endl;
            for (i = 0; i < n; i++){
                d[i] = d[i] + arr[i];
                if (arr[i] >= 35 && arr[i] <= 40){
                    d[i] = arr[i] + 40;
                    d[i] = d[i] - arr[i];
                }

                cout << d[i] << "  ";
            }
            break;

        case 7:
            cout << "Displaying the range of the array elements" << endl;
            int lea = 0;
            int mos = 0;
            lea = arr[0];
            for (i = 0; i < n; i++){
                if (arr[i] < lea)
                    lea = arr[i];
            }
            mos = arr[0];
            for (i = 0; i < n; i++){
                if (arr[i] > mos)
                    mos = arr[i];
            }

            cout << endl
                 << "\nThe range of the given array is from " << lea << " to " << mos << endl;

            break;

        default:
            cout << "invalid input!!!" << endl;
        }
        cout << "\nwhether you want to continue 1=yes,0=No" << endl;
        cin >> x;
        if (x == 1) {
            // clrscr(); // use only in turbo c
        }
    }
    getch();
    return 0;
}
