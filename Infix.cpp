#include <iostream>
# define N 20 ;
using namespace std;
int stk[N], top=-1,;
int main()
{  char postexp[20] , ch,;
   int k,i,a,j=0,p1,p2;
   cout<<endl<<" Enter the  infix expr : ";
   cin>>inexp;
   k = strlen(inexp);
   inexp[k] = ')';
   k = strlen(inexp);
   
   for(i=0;i<k;i++)
   {
       ch = inexp[i];
       
       if (ch == '(') {push(ch);}
       else if(isalpha(ch)) {postexp[j]=ch; j++;}
       else if( ch==')') 
             { 
                while(stk[top] !='(')
                 {a=pop(); postexp[j]=a;j++;  }
                 
       else if((ch=='+')||(ch=='-')||(ch=='*')||(ch=='/'))
         { p1 = preced(ch);
           p2 = preced(stk[top]);
           if ( p1 <= p2) { a = pop(); postexp[j]=a;j++; }
           push(ch);
         }
   }
   
   return 0;
}

int preced(char c)
{ if ((c=='+')||(c=='-')) return(1);
  else if((c=='*')||(c=='/')) return(2);
}  

void push(char c)
{ if (top == N-1) { cout<<" Overflow !"; return; }
  else top++; stk[top] = c; 
}  

int pop()
{ int k;
   if (top<0) { cout<<" Stack Underflow !"; return -1; }
   else k=pop(); return(k);
}
