#include<iostream.h>
#include<conio.h>

struct treenode
{
  int data;
  struct treenode *lc, *rc;
};

typedef struct treenode tnode;

void inorder (tnode *);
void preorder (tnode *);
void postorder (tnode *);

void
main ()
{
  tnode *root = NULL, *par, *temp, *newnode;

  int ele, rep = 0;
  clrscr ();

  do
    {
      cout << endl << "Enter the value";
      cin >> ele;
      newnode = new tnode;
      newnode->data = ele;
      newnode->lc = NULL;
      newnode->rc = NULL;

      if (root == NULL)
	root = newnode;
      else
	{
	  temp = root;
	  while (temp)
	    {
	      par = temp;
	      if (ele > temp->data)
		temp = temp->rc;
	      else
		temp = temp->lc;

	    }
	  if (ele > par->data)
	    par->rc = newnode;
	  else
	    par->lc = newnode;
	}

      cout << endl << "enter 0 to stop";
      cin >> rep;
    }

  while (rep);

  cout << endl << "inorder traverse is:";
  inorder (root);
  cout << endl << "--------------------------------------------------";


  cout << endl << "preorder traverse is:";
  preorder (root);
  cout << endl << "--------------------------------------------------";


  cout << endl << "postorder traverse is:";
  postorder (root);
  cout << endl << "--------------------------------------------------";

}				//---- end of main


void
inorder (tnode * t)
{
  if (t != NULL)
    {
      inorder (t->lc);		//----L-D-R
      cout << t->data << "-";
      inorder (t->rc);
    }
}



void
preorder (tnode * t)
{
  if (t != NULL)
    {
      cout << t->data << "-";	//----D-L-R
      preorder (t->lc);
      preorder (t->rc);
    }
}




void
postorder (tnode * t)
{
  if (t != NULL)
    {

      postorder (t->lc);	//----L-R-D
      postorder (t->rc);
      cout << t->data << "-";
    }
}
