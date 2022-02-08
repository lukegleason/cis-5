/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 16, 2022, 9:41 PM
 * Purpose:  Insurance
 */

//System Libraries
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
    float insr, //insurance
          cost; //replacement cost
    
    //Initialize or input i.e. set variable values
    cout<<"Insurance Calculator\n";
    cout<<"How much is your house worth?\n";
    cin>>insr;
    cost=insr*.8;
    cout<<"You need $"<<cost<<" of insurance.";
    
    //Map inputs -> outputs
    
    //Display the outputs

    //Exit stage right or left!
    return 0;
}