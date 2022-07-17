/**
 *  Read an array and perform the below tasks on the array
 * 
 *      1.	Find Sum & average of all the elements.
 *      2.	Display the elements in odd and even positions , separately. 
 *      3.	Find out how many even/odd numbers are there in the array. 
 *      4.	Linear search ( display the position of the element at which it is found )
 *      5.	Find the no.of occurrences of an element in an array.
 *      6.	Find the value between 35 to 40 and then make it 40 and then display the modified array. 
 *      7.	Range ( lowest & highest values ) of an array.
 *      8.	Selection sort
 *      9.	Bubble sort
 *      10.	Insertion sort
*/

#include <iostream>
#include <conio.h>

using namespace std;

int* arr; 
int n, x, z = 1, sum, countOdd, countEven, num, times = 0, least, highest;

int main(){
    cout << "Enter the Size of the Array : ";
    cin >> n;

    arr = new int[n];  // Remove this LINE 
    
    // Reading from Array 
    cout << "\tEnter Values of the Array\n";

    for(int i=0; i < n; i++){
        cout << "Enter a Number: ";
        cin >> arr[i];
    }

    
    // Menu Outer Loop 
    while(z){

        // Uncomment Below Line in Turbo C++
        // clrscr(); 

        // Menu 
        cout << "\tMENU\n";
        cout << "  1. Sum & Average of all Elements. \n";
        cout << "  2. Elements in Odd and Even positions. \n";
        cout << "  3. Total Even/Odd numbers in the array. \n";
        cout << "  4. Linear search an Element. \n";
        cout << "  5. Total Ocurrences of an element. \n";
        cout << "  6. Find the value between 35 to 40 and then make it 40 and then display the modified array.  \n";
        cout << "  7. Range of an array. \n";
        cout << "  8. Selection sort. \n";
        cout << "  9. Bubble sort. \n";
        cout << " 10. Insertion sort. \n";
        cout << " 11. Display Array. \n";

        cout << "\n  Enter your Choice : "; 
        cin >> x;
        cout << "\n\n";

        switch (x){
            case 1:
                // Sum & Average 
                sum = 0;
                for(int i=0; i<n; i++)
                    sum += arr[i];
                cout << "Sum Of all Elements = " << sum;
                cout << "\tAverage Of all Elements = " << sum/n;
            break;
            
            case 2: 
                // List Elems in Odd / Even Position 
                cout << "Elements in Even Position : ";
                for (int i = 0; i < n; i++){
                    if(arr[i] % 2 == 0){
                        countEven++;
                        cout << arr[i] << " ";
                    }
                }
                cout << "\nElements in Odd Position : ";
                for (int i = 0; i < n; i++){
                    if(arr[i] % 2 != 0){ 
                        countOdd++;
                        cout << arr[i] << " ";
                    }
                }
            break;
            
            case 3: 
                // Total Elems that are Odd or Even.
                cout << "Total Elements that are Odd -> " << countOdd;
                cout << "\nTotal Elements that are Even -> " << countEven;
            break;
                
            case 4:
                times = 0;
                cout << "Enter the Number you want to search : ";
                cin >> num;

                cout << "Searched Number present in - ";

                for (int i = 0; i < n; i++){
                    if(arr[i] == num){
                        cout << i+1 << "th, ";
                        times++;
                    }
                }
                if(times == 0)
                    cout << "no ";
                cout << "position of the Array.";
                 
            
            break;

            case 5:
                times = 0;
                cout << "Enter the Number you want to search : ";
                cin >> num;

                for (int i = 0; i < n; i++){
                    if(arr[i] == num){
                        times++;
                    }
                }
                cout << "\n" << num << " is Present " << times << " times in the Array.";

            break;

            case 6:
                for(int i = 0; i<n; i++){
                    if(arr[i] >= 35 && arr[i] <= 40)
                        arr[i] = 40;
                    // Displaying Modified Array 

                    cout << arr[i] << " ";
                }
            break;

            case 7:
                // Range of Array

                least=arr[0], highest=arr[0];
                
                for (int i = 1; i < n; i++){
                    if(arr[i] > highest)
                        highest = arr[i];
                    if(arr[i] < least)
                        least = arr[i];
                }

                cout << "The range of the array is : " << least << " to " << highest;

            break;

            case 8:
                // Selection Sort 
                for (int i=0; i<n; i++) {
                    least = arr[i];
                    for (int j=0; j<n; j++) {
                        if (arr[j]>least) {
                            least=arr[j]; 
                            arr[j] = arr[i];
                            arr[i] = least;
                        }
                    }
                }
                cout << "\nAfter sorting: ";
                for(int i=0; i<n; i++)
                    cout << arr[i] << " ";

            break;

            case 9:

                // Bubble sort 
                int temp;
                for (int i = 0; i < n; i++){
                    for (int j = 0; j < n-i; j++){
                        if(arr[j] > arr[j+1]){
                            temp = arr[j];
                            arr[j] = arr[j+1];
                            arr[j+1] = temp;
                        }
                    } 
                }
                cout << "\nAfter sorting: ";
                for(int i=0; i<n; i++)
                    cout << arr[i] << " ";

            break;

            case 10:
                // Insertion Sort 
                int k; 
                for (int i = 1; i < n; i++){ 
                    k = arr[i]; 
                    int j = i - 1; 
            
                    while (j >= 0 && arr[j] > k)
                    { 
                        arr[j + 1] = arr[j]; 
                        j = j - 1; 
                    } 
                    arr[j + 1] = k; 
                } 
                cout << "\nAfter sorting: ";
                for(int i=0; i<n; i++)
                    cout << arr[i] << " ";

            break;

            case 11: 
                // Display Array
                cout << "Array : ";
                for(int i=0; i<n; i++)
                    cout << arr[i] << " ";

            break;
            
            default:
                cout << "Err || Invalid Option Selected. (Kindly Choose the correct Option Number.)";
            break;
        }

        cout << "\n\nDo you want to Continue (1 = Yes / 0 = No) : ";
        cin >> z;

        // clrscr(); // Uncomment in Turbo C++
    }
    return 0;
}