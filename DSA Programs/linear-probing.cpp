#include<iostream.h>
#include<conio.h>

# define N 15

int hashfunc(int x)
{
return(x%10);
}
void main()
{
int htab[N],arr[N],i,n,key,x;
for(i=0;i<N;i++){
htab[i]=-1;
}
clrscr();

cout<<endl<<"how many values are there ";
cin>>n;

cout<<"Enter the elements"<<endl;
for(i=0;i<n;i++)
cin>>arr[i];

for(i=0;i<n;i++)
{

key=hashfunc(arr[i]);
while(htab[key]!=-1)
{
cout<<endl<<"collision occured at: "<<key;
key++;    
}
htab[key]=arr[i];
}
cout<<endl<<"the hash table";
for(i=0;i<N;i++)
cout<<i<<" - " <<htab[i]<<" - ";
}
