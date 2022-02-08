/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 16, 2022, 9:16 PM
 * Purpose: Gaddis Average
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
using namespace std;


//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float num1,num2,num3,num4,num5,avg;
     
    //Initialize or input i.e. set variable values
    cout<<"Input 5 numbers to average.\n";
    cin>>num1;
    cin>>num2;
    cin>>num3;
    cin>>num4;
    cin>>num5;
    
    //Map inputs -> outputs
    avg=(num1+num2+num3+num4+num5)/5;
    
    cout<<"The average = ";
    cout<<fixed<<setprecision(1)<<avg;
    //Exit stage right or left!
    return 0;
}