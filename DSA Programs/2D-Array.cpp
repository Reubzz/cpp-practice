#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    //   clrscr (); // use only in turbo C.
    int i, j, n, x, m;
    int name;
    int mat[10][10];
    cout << "Enter the Number of rows" << endl;
    cin >> n;
    cout << "Enter the Number Of coloumns" << endl;
    cin >> m;

    cout << "Enter the matrix value" << endl;

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << "Enter element for a" << i + 1 << j + 1 << ":" << endl;
            cin >> mat[i][j];
        }
    }
    cout << "Entered matrix" << endl;
    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cout << mat[i][j] << "  ";
        }
        cout << endl;
    }
    x = 1;
    while (x){
        cout << "enter different variables to print different outputs" << endl
             << endl;
        cout << "press 1 - To print the Diagonal elements" << endl
             << endl;
        cout << "press 2 - To check whether your entered matrix is unit or not" << endl
             << endl;
        cout << "press 3 - To print the transpose of a matrix" << endl
             << endl;
        cout << "press 4 - To print the upper triangle of a matrix" << endl
             << endl;
        cout << "press 5 - To print the lower triangle of a matrix" << endl
             << endl;
        cout << "press 6 - To print the Addition of rows of a matrix" << endl
             << endl;
        cout << "press 7 - To print the Addition of coloums of a matrix" << endl
             << endl;
        cout << "press 8 - To add the given two matix" << endl
             << endl;
        cout << "press 9 - To print the subraction of the two matrix" << endl
             << endl;
        cout << "press 10 - To print the reverse of the diagnol" << endl
             << endl;
        cin >> name;

        switch (name){
        case 1:

            cout << "displaying the diagnol elements" << endl;

            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    if (i == j)
                        cout << mat[i][j];
                    cout << "  ";
                }
                cout << "\n";
            }
            break;

        case 2:
            if(n == m){
                int chkU = 0;
                for (i = 0; i < n; i++){
                    for ( j = 0; j < m; j++){
                        if(i==j){
                            if(mat[i][j] == 1)
                                chkU++;
                            else 
                                chkU = 0;
                        }
                        else if(i != j){
                            if(mat[i][j] == 0)
                                chkU++; 
                            else 
                                chkU = 0;
                        }
                        else
                            chkU = 0; 
                    }
                }
                cout << endl << endl;
                if(chkU != (n*m))
                    cout << "It is not a Unit Matrix";
                else 
                    cout << "It is a Unit Matrix";
            }
            break;

        case 3:

            int tra[10][10];

            cout << endl;
            for (i = 0; i < n; i++)
                for (j = 0; j < m; j++){
                    tra[j][i] = mat[i][j];
                }
            cout << "The transpose of the matrix is:" << endl;
            for (i = 0; i < m; i++){
                for (j = 0; j < n; j++)
                    cout << tra[i][j] << " ";
                cout << endl;
            }
            break;

        case 4:

            cout << "upper triangular matrix: " << endl;
            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    if (i > j){
                        cout << " "
                             << " ";
                    }
                    else
                        cout << mat[i][j] << " ";
                }

                cout << "\n";

                cout << endl;
            }

            break;

        case 5:

            cout << "lower triangular matrix: " << endl;
            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    if (i < j){
                        cout << " "
                             << " ";
                    }
                    else
                        cout << mat[i][j] << " ";
                }

                cout << "\n";

                cout << endl;
            }

            break;

        case 6:

            cout << "addition of a row" << endl;
            for (i = 0; i < n; i++){
                int sum = 0;
                for (j = 0; j < m; j++){
                    sum = sum + mat[i][j];
                }
                cout << "the sum of row " << i + 1 << "= " << sum << endl;
            }

            break;

        case 7:

            cout << "addition of a coloumn" << endl;
            for (i = 0; i < n; i++){
                int col = 0;
                for (j = 0; j < m; j++){
                    col = col + mat[j][i];
                }
                cout << "the sum of coloumn = " << col << endl;
            }
            break;

        case 8:

            int Amat[10][10];
            int Bmat[10][10];
            cout << "enter the second matrix" << endl;
            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    cin >> Bmat[i][j];
                }
            }

            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    Amat[i][j] = mat[i][j] + Bmat[i][j];
                }
            }

            cout << "sum of the given  two matrix" << endl;
            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    cout << Amat[i][j];
                    cout << "  ";
                }
                cout << endl;
                cout << "\n";
            }

            break;

        case 9:

            cout << "enter the second matrix" << endl;
            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    cin >> Bmat[i][j];
                }
            }

            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    Amat[i][j] = mat[i][j] - Bmat[i][j];
                }
            }

            cout << "subraction of the given  two matrix" << endl;
            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    cout << Amat[i][j];
                    cout << "  ";
                }
                cout << endl;
                cout << "\n";
            }

            break;

        case 10:
            cout << "displaying the reverse of diagnol elements" << endl;

            for (i = 0; i < n; i++){
                for (j = 0; j < m; j++){
                    if ((i + j) == (n - 1))
                        cout << mat[i][j];
                    cout << "  ";
                }
                cout << "\n";
            }

            break;

        default:
            cout << "invalid input please try again entering the correct value" << endl;
            break;
        }

        cout << "do you want to continue 1=yes,0=no" << endl;
        cin >> x;
        if (x >= 1){
            // clrscr(); // use only in turbo c
        }
    }
    getch();
    return 0;
}
