/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    int minNum,
        maxNum;
    int num;
    //Initialize Variables
    minNum=1;
    maxNum=10;
    
    //Display the outputs
    cout<<"Number Number Squared\n";
    cout<<"-------------------------\n";
    
    for (num = minNum; num <= maxNum; num++)
        cout<<num<<"\t"<<(num*num)<<endl;
    
    //Exit the program
    return 0;
}