#include <iostream>
#include <conio.h>

using namespace std;

struct node{
    int data;
    struct node *link;
};
int main(){
    struct node *head, *ptr, *newnode;
    int ele, rep;
    // clrscr(); // turbo c only

    cout << endl << "Enter the First Value";
    cin >> ele;

    newnode = new node;
    newnode->data = ele;
    newnode->link = NULL;

    ptr = newnode;
    head = ptr;

    // head=newnode;
    // ptr=head;

    do{
        cout << "enter next value" << endl;
        cin >> ele;

        newnode = new node;
        newnode -> data = ele;
        newnode -> link = NULL;

        ptr -> link = newnode;
        ptr = ptr->link;

        cout << "Any more Data? (1=yes/0=no) : ";
        cin >> rep;

    } while (rep);
    cout << "The linked list is :";
    ptr = head;
    while (ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->link;
    }

    cout << endl;

    int val;
    cout << "enter the value" << endl;
    cin >> ele;
    newnode = new node;
    newnode->data = ele;
    newnode->link = NULL;
    //--------------------------------------
    int k = 1;
    cout << "After which value you want to insert" << endl;
    cin >> val;
    ptr = head;

    while (ptr){
        if (ptr->data != val){
            ptr = ptr->link;
            k++;
        }
        else{
            newnode->link = ptr->link;
            ptr->link = newnode;
            ptr = ptr->link;
        }
    }
    cout << "The linked list is :";
    ptr = head;
    while (ptr != NULL){
        cout << ptr->data << " ";
        ptr = ptr->link;
    }
    cout << endl;
    //----------------------------------
    int fu = 1;
    while (fu){
        cout << "enter the data which you want to delete" << endl;
        cin >> val;

        

        struct node *prev;
        ptr = head;
        prev = head;
        while (ptr){
            if (ptr->data != val){
                prev = ptr;
                ptr = ptr->link;
            }
            else{
                prev->link = ptr->link;
                ptr = ptr->link;
            }
        }
        cout << "the linked list after deletion:" << endl;
        ptr = head;
        while (ptr != NULL){
            cout << ptr->data << " ";
            ptr = ptr->link;
        }
        cout << endl;
        cout << "whether you want to delete more data (1=yes/0=n0)" << endl;
        cin >> fu;
    }
    getch();
    return 0;
}
