/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 12, 2022, 4:24 PM
 * Purpose:  Add cents based on user-input.
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
    int qrtrs,dimes,nckles;
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    
    //Display the outputs
    cout<<"Welcome to the cent adder program.\nQuarters: ";
    cin>>qrtrs;
    cout<<"\nDimes: ";
    cin>>dimes;
    cout<<"\nNickles: ";
    cin>>nckles;
    cout<<"\n\nYour total is: "<<qrtrs*.25+dimes*.1+nckles*.05;
    //Exit the program
    return 0;
}