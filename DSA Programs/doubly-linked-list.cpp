#include<iostream>
#include<conio.h>

using namespace std;


struct dnode
{
  int data;
  struct dnode *rlink;
  struct dnode *llink;
};
void
main ()
{
  struct dnode *head, *ptr, *newnode;
  int ele, rep;
  int sa = 1;
  // clrscr ();


  cout << endl << "enter the first value";
  cin >> ele;

  newnode = new dnode;
  newnode->data = ele;
  newnode->rlink = NULL;
  newnode->llink = NULL;

  head = newnode;
  ptr = head;

  do
    {
      cout << "enter the value" << endl;
      cin >> ele;


      newnode = new dnode;
      newnode->data = ele;
      newnode->rlink = NULL;
      newnode->llink = NULL;

      ptr->rlink = newnode;
      newnode->llink = ptr;
      ptr = ptr->rlink;

      cout << "any more data?(1=yes/0=no)" << endl;
      cin >> rep;

    }
  while (rep);
  cout << "The doubly linked list is :";
  ptr = head;
  while (ptr != NULL)
    {
      cout << ptr->data << " ";
      ptr = ptr->rlink;
    }

  cout << endl;


  ptr = newnode;
  cout << "The reverse linked list is :";
  while (ptr != NULL)
    {
      cout << ptr->data << " ";
      ptr = ptr->llink;

    }





  int val;
  while (sa)
    {
      cout << "enter the value" << endl;
      cin >> ele;
      newnode = new dnode;
      newnode->data = ele;
      newnode->rlink = NULL;
      newnode->llink = NULL;
      cout << "After which value you want to insert" << endl;
      cin >> val;
      ptr = head;

      while (ptr)
	{
	  if (ptr->data != val)
	    ptr = ptr->rlink;
	  else
	    {
	      newnode->rlink = ptr->rlink;
	      newnode->llink = ptr;
	      ptr->rlink = newnode;
	      (newnode->rlink)->llink = newnode;
	      ptr = ptr->rlink;
	    }
	}
      cout << "The updated doubly linked list is :";
      ptr = head;
      while (ptr != NULL)
	{
	  cout << ptr->data << " ";
	  ptr = ptr->rlink;

	}

      cout << endl;
      cout << "whether you want to insert more data (1=yes/0=n0)" << endl;
      cin >> sa;
    }

  cout << endl;

















  cout << endl;


//----------------------------------
  int fu = 1;
  while (fu)
    {
      cout << "enter the data which you want to delete" << endl;
      cin >> val;

      ptr = head;
      while (ptr)
	{
	  if (ptr->data != val)
	    {
	      ptr = ptr->rlink;
	    }
	  else
	    {
	      (ptr->llink)->rlink = ptr->rlink;
	      ptr = ptr->rlink;
	    }
	}
      cout << "the linked list after deletion:" << endl;
      ptr = head;
      while (ptr != NULL)
	{
	  cout << ptr->data << " ";
	  ptr = ptr->rlink;
	}
      cout << endl;
      cout << "whether you want to delete more data (1=yes/0=n0)" << endl;
      cin >> fu;
    }

  getch ();
}
