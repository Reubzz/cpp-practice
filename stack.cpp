#include <iostream>
#include <conio.h>

using namespace std; // Comment this in Turbo C++

int stck[30], top = -1, i, n, elem;

void push(int);
void pop();
void display();

void main(){
    //clrscr(); // uncomment in Turbo C++
    int ch, res, x;

    cout << "Enter the Total Values in the list : ";
    cin >> n;

    x = 1;
    while (x){
        cout << "\n\n\tMenu\n1. Push\n2. Pop\n3. Display\nSelect your option : ";
        cin >> ch;
        switch (ch){
        case 1:
            cout << "\nEnter the Number you want to push : ";
            cin >> elem;
            push(elem);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        default:
            cout << "Invalid Choice!!";
            break;
        }
        cout << "\n\nDo you want to Continue? (1 = Yes / 0 = No)";
        cin >> x;
        
        // if(x > 0) // Uncomment in Turbo C++
            // clrscr(); // Uncomment in Turbo C++
    }
}
void push(int a){
    if(top == n-1){
      cout << "\nErr || Stack Overflow";
      return;
    }
    top++;
    cout << "\nCurrent index of topmost elem = " << top;
    stck[top] = a;
    return;
}
void pop(){
    if(top == -1){
      cout << "\nErr || Stack Underflow";
      return;
    }
    cout << "Removing " << top << " element -> " << stck[top];
    top--;
    return;
}
void display(){
    cout << "\nStack -> ";
    for(i=0; i<=top; i++){
	cout << stck[i] << ", ";
    }
    return;
}
