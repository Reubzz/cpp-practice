// TODO - Checklist

// 1 Principal Diagonal Elements        - DONE
// 2 Reverse Diagonal                   - Work in Prog
// 3 Transpose                          - DONE
// 4 Check if unit matrix or not        - DONE
// 5 Row wise totals                    - DONE
// 6 col wise totals                    - DONE
// 7 Upper Triangle Elements 
// 8 Lower triangle elements 

#include <iostream>
#include <conio.h>

using namespace std;


int main(){
    int mat[10][10], col=0, row=0, n, i, j;

    cout << "Enter the number of rows : ";
    cin >> row; 

    cout << "Enter the number of columns : ";
    cin >> col; 

    for(i=0; i < row; i++){
        cout << "Enter " << col << " values for row " << i+1 << " : ";
        for (j = 0; j < col; j++){
            cin >> mat[i][j];
        }
    }
    cout << "\n\n";

    for (i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            cout << mat[i][j] << " ";
        }
        cout << "\n";
    }

// 1 Principal Diagonal Elements

    cout << "\nPrincipal Diagonal Elements are : ";
    for (i = 0; i < row; i++){
        for ( j = 0; j < col; j++){
            if( i == j){
                cout << mat[i][j] << " ";
            }
        }
    }

// 2 Reverse Diagonal 


    cout << "\nReverse Diagonal Elements are : ";
    int ex=0, ey=col-1;
    for (i = 0; i < row; i++){
        for (j = 0; j < col; j++){
            if(i == ex && j == ey){
                cout << mat[i][j] << " ";
                ex++;
                ey--;
            }
        }
    }


// 3 Transpose


    cout << "\n\nTranspose of the Matrix is : \n\n";
    for (i = 0; i < col; i++){
        for (j = 0; j < row; j++){
            cout << mat[j][i] << " ";
        }
        cout << "\n";
    }

// 4 Check if its a unit matrix or not

    if(row == col){
        int chkU = 0;
        for (i = 0; i < row; i++){
            for ( j = 0; j < col; j++){
                if(i==j){
                    if(mat[i][j] == 1)
                        chkU = 1;
                    else 
                        chkU = 0;
                }
                else if(i != j){
                    if(mat[i][j] == 0)
                        chkU = 1; 
                    else 
                        chkU = 0;
                }
                else
                    chkU = 0; 
            }
        }
        cout << endl << endl;
        if(chkU == 0)
            cout << "It is not a Unit Matrix";
        else 
            cout << "It is a Unit Matrix";
    }

    // 5 Row wise totals
    cout << "\n\nRow Wise total is : ";

    for (i = 0; i < row; i++){
        int x=0;
        for ( j = 0; j < col; j++){
            x += mat[i][j];
        }
        cout << x << " ";
    }

    // 6 col wise totals 


    cout << "\nCol Wise total is : ";
    for (i = 0; i < row; i++){
        int x=0;
        for ( j = 0; j < col; j++){
            x += mat[j][i];
        }
        cout << x << " ";
    }
    
    return 0;
}