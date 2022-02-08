/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 12, 2022, 8:05 PM
 * Purpose:  Annual Pay
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
    int pyAmt, //payAmount -- pay the employee earns each pay period. 
        pyPrds, //payPeriods -- number of pay periods in a year
        anlPy; //annualPay -- Employee's total annual pay, which will be calculated.
    
    //Initialize Variables
    pyAmt=2200;
    pyPrds=26;
    
    cout<<"Annual Pay: "<<pyAmt*pyPrds;
    return 0;
}