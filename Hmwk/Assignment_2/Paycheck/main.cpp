/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 16, 2019, 10:04 PM
 * Purpose:  Paycheck
 */

//System Libraries
#include <iomanip>
#include <iostream>  //Input/Output Library

using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    int payRate,
        hrsWrkd;
    float payChck;
    
    //Initialize or input i.e. set variable values
    cout<<"This program calculates the gross paycheck.\n";
    cout<<"Input the pay rate in $'s/hr and the number of hours.\n";
    cin>>payRate>>hrsWrkd;
    
    //Map inputs -> outputs
    payChck = hrsWrkd<40?
        hrsWrkd*payRate:
        40*payRate+(hrsWrkd-40)*2*payRate;
    
    //Display the outputs
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Paycheck = $"<<setw(7)<<payChck;
    
    //Exit stage right or left!
    return 0;
}