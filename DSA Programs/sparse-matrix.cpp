#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int i, j, n, m, mat[10][10], dia[10];

    cout << "enter the number of rows andd coloumns u want in the matrix " << endl;
    cin >> n >> m;

    cout << "Enter the diagonal elements value: " << endl;
    for (i = 0; i < n; i++)
    {
        cin >> dia[i];
    }

    cout << "Displaying the diagonal elements: " << endl;
    for (i = 0; i < n; i++)
    {
        cout << dia[i] << ",";
    }

    cout << endl;

    cout << "Enter the Matrix: " << endl;

    /*
     Enter Matrix in full n x m format (The bounds you decided in the first step. eg - 3 x 3 matrix or 5 x 5 matrix)
     like
     x x x
     x x x
     x x x

     after entering the matrix during display the diagonal elements will be changed to the elements you provided
     hence making the new displayed matrix as:
     y x x
     x y x
     x x y

     y being the diagonal elements you provided
     x being the matrix you provided.
    */
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            cin >> mat[i][j];
        }
    }
    cout << endl;

    // int trans = 0;
    cout << "Displaying the sparse of a matrix:" << endl;
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (i == j)
                cout << dia[i];
            else
            {
                cout << mat[i][j];
            }
            cout << "  ";
        }
        cout << "\n";
    }
    getch();
    return 0;
}