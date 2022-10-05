#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

using namespace std;

#define N 20

int preced(char);

char stk[N];
int top = -1;

void push(char c)
{
    if (top == N - 1)
        cout << "Overflow";
    else
    {
        stk[++top] = c;
    }
}

char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    else
        return stk[top--];
}

int preced(char ch)
{
    if (ch == '(')
        return 1;
    if (ch == '+' || ch == '-')
        return 2;
    if (ch == '*' || ch == '/')
        return 3;
    if (ch == '^')
        return 4;
}

int main()
{
    char strlen[35], *t, x;
    cout << "Enter expression: ";
    fgets(strlen, 35, stdin);
    t = strlen;
    while (*t)
    {
        if (isalnum(*t))
            cout << *t;
        else if (*t == '(')
            push(*t);
        else if (*t == ')')
        {
            while ((x = pop()) != '(')
                cout << x;
        }
        else
        {
            char topele = stk[top];
            if (preced(topele) >= preced(*t))
                cout << pop();
            push(*t);
        }
        t++;
    }
    while (top != -1)
        cout << pop();

    return 0;
}
