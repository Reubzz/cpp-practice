#include <iostream>


using namespace std; // remove in turbo c

int main()
{
    //   clrscr (); // use only in turbo C.
    int i, j, n, m;
    int mat[10][10];
    int A[10][10];
    int B[10][10];

    // MATRIX DATA
    cout << "Enter the Number of rows" << endl;
    cin >> n;
    cout << "Enter the Number Of columns" << endl;
    cin >> m;


    // FIRST MATRIX
     cout << "Enter the second matrix" << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << "Enter element for a" << i + 1 << j + 1 << ":" << endl;
            cin >> A[i][j];
        }
    }
    cout << "Entered matrix A" << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << A[i][j] << "  ";
        }
        cout << endl;
    }

    // SECOND MATRIX 
    cout << "Enter the second matrix" << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << "Enter element for a" << i + 1 << j + 1 << ":" << endl;
            cin >> B[i][j];
        }
    }
    cout << "Entered matrix B" << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << B[i][j] << "  ";
        }
        cout << endl;
    }
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            mat[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "sum of the given two matrices" << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << mat[i][j];
            cout << "  ";
        }
        cout << endl;
    }
    getch(); // Add in Turbo C
}
