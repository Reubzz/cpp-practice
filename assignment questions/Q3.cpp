/**
 * Mark sheet program : Read marks of N no.of students in k subjects each. Find out the below data :
 *      a)	Each student’s total and average marks.
 *      b)	Each subject’s average marks.
 *      c)	Top marks in each subject and the roll no of that topper. 
 *      d)	Class topper and his/her Roll no. and average marks
 *      
 *      Expected Table : 
 *              c0          c1          c2          c3          c4
 *         +-----------+-----------+-----------+-----------+-----------+
 *   r0    | Sr. No.   | Roll No.  | Subject 1 | Subject 2 | Subject 3 |
 *         +-----------+-----------+-----------+-----------+-----------+
 *   r1    |   1.      |   5144    |   54      |   60      |   90      |
 *         +-----------+-----------+-----------+-----------+-----------+
 *   r2    |   2.      |   5115    |   78      |   72      |   98      |
 *         +-----------+-----------+-----------+-----------+-----------+
 *   r3    |   3.      |   5121    |   90      |   58      |   94      |
 *         +-----------+-----------+-----------+-----------+-----------+
 *   r4    |   4.      |   5143    |   70      |   87      |   75      |
 *         +-----------+-----------+-----------+-----------+-----------+
 */

#include <iostream>
#include <conio.h>

using namespace std;

int** mrksht;

int stNum, subj, x, z=1, totM, avgM, i, j;


int main(){

    cout << "Enter Total Number of Students : ";
    cin >> stNum; 
    cout << "Enter the Total Number of Subjects : ";
    cin >> subj;

    mrksht = new int*[stNum]; 

    for(i = 0; i < stNum; i++)
        mrksht[i] = new int[subj+2];
    
    int count;
    for(i = 0; i < stNum; i++){
        count = 0;
        for (j = 1; j < subj+2; j++){
            if(j == 1)
                cout << "Enter Roll No.: ";
            else 
                cout << "Enter Marks for Subject " << count << " : ";
            cin >> mrksht[i][j];
            count++;
        }
        cout << "\n";
    }

    // Display Data 
    
    cout << "\n+---------------+---------------+";
    for (i = 0; i < subj; i++)
        cout << "---------------+";
    cout << "\n| Sr. No.\t|  Roll No.\t";
    for(i = 0; i < subj; i++)
        cout << "|  Subject " << i+1 <<"\t";
    cout << "|";
    cout << "\n+---------------+---------------+";
    for (i = 0; i < subj; i++)
        cout << "---------------+";
    for (i = 0; i < stNum; i++){
        cout << "\n";
        for (j = 0; j < subj+2; j++){
            if(j == 0){
                cout << "|\t" << i+1 << "\t";
            }
            else {
                cout << "|\t" << mrksht[i][j] << "\t";
            }
        }
        cout << "|";
        cout << "\n+---------------+---------------+";
        for (i = 0; i < subj; i++)
            cout << "---------------+";
    }
    while(z){

        cout << "\n\tMenu\n";
        cout << "1. Each student's total and average marks\n";
        cout << "2. Student with Top marks in each subject\n";
        cout << "3. Class topper\n"; // Roll no disp with his avg
        cout << "\nChoose your Option : ";
        cin >> x;

        switch (x){
        case 1:
            // 1. Each student's total and average marks
            cout << "\n";
            for (i = 0; i < stNum; i++){
                totM = 0;
                avgM = 0;
                // cout << "\n\tStudent" << i+1 << "\n";
                for (j = 2; j < subj+2; j++){
                    totM += mrksht[i][j];
                    avgM = totM/subj;
                }
                cout << mrksht[i][1] << " - Total Marks = " << totM << " & Average = " << avgM << "\n";
            }
            break;

        case 2: 
            // Student with Top Marks in each Subject
            int topRoll;
            int topMarks;
            int pos;
            cout << "\n";
            for (i = 2; i < subj+2; i++){
                topMarks = 0;
                for (j = 0; j < stNum; j++){
                    if(topMarks < mrksht[j][i]){
                        topMarks = mrksht[j][i];
                        topRoll = mrksht[j][1];
                        pos = j;
                    }
                }
                cout << "Topper for Subject " << pos+1 << " -> " << topRoll << " - " << topMarks << " marks.\n";
            }
            
            break;

        case 3: 
            // Class topper
            int temp;
            int tempRoll;
            temp = 0;
            for (i = 0; i < stNum; i++){
                totM = 0;
                for (j = 2; j < subj+2; j++){
                    totM += mrksht[i][j];
                }
                if(temp < totM){
                    temp = totM;
                    tempRoll = mrksht[i][1];
                }
            }
            cout << "\n\tClass Topper\n";
            cout << "Roll No: " << tempRoll << "\nTotal Marks: " << temp << "\nAverage Marks: " << temp/subj; 
            break;
        
        default:
            cout << "Err | Invalid Choice";
            break;
        }

        cout << "\nDo you want to Continue (1 = Yes / 0 = No) : ";
        cin >> z;
        
    }
    
    return 0;
}