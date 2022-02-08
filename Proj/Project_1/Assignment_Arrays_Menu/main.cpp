/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip> //Format Library
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions
const int COLS = 6;
const int ROWS = 6;

//Function Prototypes
void fillTbl(int array[ROWS][COLS], int);
void prntTbl(int array[ROWS][COLS], int);

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //List of Problems which can be run by the program
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0"<<endl;
        cout<<"Problem 1"<<endl;
        cout<<"Problem 2"<<endl;
        cout<<"Problem 3"<<endl;
        cout<<"Problem 4"<<endl;
        cout<<"Problem 5"<<endl;
        cout<<"Problem 6"<<endl;
        cout<<"Problem 7"<<endl;
        cout<<"Problem 8"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cin>>choose;
        
        switch(choose){
            case 0:
                int tablSum[ROWS][COLS];
                prntTbl(tablSum, ROWS);   
                break;
            case 1:
                
                
                break;
            case 2:
                    const int ROWS=6;
                    string row [] = {"R", "O", "W", "S"} ;
                   int rowSi = 4;
                   int c = 0;
                   // int tablSum[ROWS][COLS];

                   //Initialize or input i.e. set variable values
                   // fillTbl(tablSum,ROWS);

                   //Display the outputs
                   // prntTbl(tablSum,ROWS);
                   cout << "Think of this as a Product/Muliplication Table" << endl;
                   cout << "           C o l u m n s" << endl;
                   cout << "     |";
                   for(int a = 1; a <= COLS; a++){
                       cout << "   " << a;
                   }
                   cout << endl << "----------------------------------" << endl;
                   for(int b = 1; b <= ROWS; b++){
                       if(b < 2 || b > 5){
                           cout << "   ";
                       }else{
                           cout << row[c] << "  ";
                           if(c < rowSi){
                               c += 1;
                           }

                       }
                       cout << b << " |";
                       for(int d = 1; d <= COLS; d++){
                           int sum = b*d;
                           if(sum > 9){
                               cout << "  " << sum;
                           } else{
                               cout << "   " << sum;
                           }
                       }
                       cout << endl;
                   }
                
                break;
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}
void fillTbl(int array[ROWS][COLS], int numRows) {
    for (int row=1; row<=numRows;row++) {
        cout<<setw(4)<<row;
    }
}

void prntTbl(int array[ROWS][COLS], int print) {
    cout<<"Think of this as the Sum of Dice Table"<<endl;
    cout<< "           C o l u m n s" <<endl;
    cout<< "     |";
    
    for (int row=1;row<=ROWS;row++) {
        cout<<setw(4)<<row;
    }
    
    cout << endl;
    cout << "----------------------------------" << endl;
    
    for (int row = 1; row <= 6; row++) {
        if (row == 1)
            cout<<"   ";
        if (row == 2)
            cout<<"R  ";
        if (row == 3)
            cout<<"O  ";
        if (row == 4)
            cout<<"W  ";
        if (row == 5)
            cout<<"S  ";
        if (row == 6)
            cout<< "   ";
            cout<<row<<" |";
        for (int col=1;col<=6;col++) {
            cout<<setw(4)<<row+col;
        }
        cout << endl;
    }
}