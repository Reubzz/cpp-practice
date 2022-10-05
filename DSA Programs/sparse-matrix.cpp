#include<iostream.h>
#include<conio.h>


void main()
{
int i,j,n,m;
int mat[10][10];
int dia[10];
 
cout<<"enter the number of rows andd coloumns u want in the matrix "<<endl;
cin>>n>>m;

cout<<"Enter the diagnol elements value"<<endl;
for(i=0;i<n;i++)
{
cin>>dia[i];
}


cout<<"displaying the diagnol elements"<<endl;
for(i=0;i<n;i++)
{
cout<<dia[i]<<",";
}

cout<<endl;

for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        cin>>mat[i][j];
    }
}
cout<<endl;


int trans=0;
cout<<"Displaying the sparse of a matrix:"<<endl;
for(i=0;i<m;i++)
{
    for(j=0;j<n;j++)
{   
    if(i==j)
    cout<<dia[i];
    else
    {
        cout<<mat[i][j];
    }
    cout<<"  ";
}
cout<<"\n";
}
getch();
}





