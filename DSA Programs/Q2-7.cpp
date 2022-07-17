#include <conio.h>
#include <iostream>

using namespace std;
int main() {

    int matA[10][10], matB[10][10], res[10][10], row, col, i, j, choice, x=1;
    cout << "Enter the order of the matrix: ";
    cin >> row >> col;

    if (row != col)
        cout << "This is not a square matrix!!";
    else {
        cout << "\nEnter the matrix elements for first matrix: ";
        for (i = 0; i < row; i++){
            for (j = 0; j < col; j++)
                cin >> matA[i][j];
        }
        cout << "\nEnter the matrix elements for second matrix: ";
        for (i = 0; i < row; i++){
            for (j = 0; j < col; j++)
                cin >> matB[i][j];
        }

        
        while (x){
            cout << "\n\tMenu\n";
            cout << "1. Add The Two Matrices.\n";
            cout << "2. Subtract The Two Matrices.\n";
            cin >> choice;

            switch (choice){
                case 1:
                    for (i = 0; i < row; i++){
                        for (j = 0; j < col; j++)
                            res[i][j] = matA[i][j] + matB[i][j];
                    }
                    cout << "Addition of the two matrices:" << "\n";
                    for (i = 0; i < row; i++){
                        for (j = 0; j < col; j++)
                            cout << res[i][j] << " ";
                        cout << "\n";
                    }
                    
                break;
                
                case 2:
                    cout << "\nThe Subtraction of the two matrices is:" << "\n";
                    for (i = 0; i < row; i++){
                        for (j = 0; j < col; j++){
                            res[i][j] = matA[i][j] - matB[i][j];
                            cout << res[i][j] << " ";
                        }
                        cout << "\n";
                    }
                    // for (i = 0; i < row; i++){
                    //     for (j = 0; j < col; j++)
                    //         cout << res[i][j] << " ";
                    //     cout << "\n";
                    // }
                break;

                default:
                    cout << "Err | Invalid Option";
                break;
            }
            cout << "Do you want to Continue (1 = Yes / 0 = No) : ";
            cin >> x;
        }
        
    }
    return 0;
}
