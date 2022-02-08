/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 12, 2022, 4:00 PM
 * Purpose:  Add and multiple user-given integers
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
    //Initialize Random Seed once here!
    
    //Declare Variables
    int var1,var2;
    //Initialize Variables
    
    //Map the inputs/known to the outputs

    //Display the outputs
    cout<<"Please enter your first integer: ";
    cin>>var1;
    cout<<"\n Please enter your second integer: ";
    cin>>var2;
    cout<<"\n"<<var1<<"+"<<var2<<"="<<var1+var2;
    cout<<"\n"<<var1<<"*"<<var2<<"="<<var1*var2;
    //Exit the program
    return 0;
}