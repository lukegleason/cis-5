/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 30, 2022, 7:44 PM
 * Purpose:  Lab Assignment 1 - Budget/Percentage.
 * Calculate the military budget as a percentage of the federal budget.
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>
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
    unsigned int budgMil; //Military Budget
    unsigned int budgFed; //Federal Budget
    float milFed; //Military Federal Budget Ratio
    
    //Initialize Variables
    budgMil=752; //752 billion
    budgFed=6820; //6,820 billion
    
    //Map the inputs/known to the outputs
    milFed=static_cast<float>(budgMil)/static_cast<float>(budgFed); //Determine the ratio
    
    //Display the outputs
    cout<<"Military Budget is equal to "<<budgMil<<" billion dollars."<<endl;
    cout<<"Federal Budget is equal to "<<budgFed<<" billion dollars."<<endl;
    cout<<fixed<<showpoint;
    cout<<setprecision(5);
    cout<<"The Military Budget/Federal Budget ratio is "<<milFed<<"%."<<endl;
    
    //Exit the program
    return 0;
}