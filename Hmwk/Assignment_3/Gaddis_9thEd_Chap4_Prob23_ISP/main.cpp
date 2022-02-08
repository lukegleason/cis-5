/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 31, 2022, 7:38 AM
 * Purpose: What is my internet bill?
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>   //IO manip
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
    char package;int hours;float cost;
    
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    cout<<"ISP Bill\nInput Package and Hours\n";
    cin>>package>>hours;
    
    cout<<showpoint<<fixed;
    cout<<setprecision(2);
    
    if (package=='a' || package=='A'){
        if(hours-10<0){
            cost=9.95;
        } else {
            cost=(hours-10)*(2.00)+9.95;
        }
    }
    
    if (package=='b' || package=='B'){
        if(hours-20<0){
            cost=14.95;
        } else {
            cost=(hours-20)*(1.00)+14.95;
        }
    }
    
    if (package=='c' || package=='C'){
        cost=19.95;
    }
    
    //Display the outputs
    cout<<"Bill = $ "<<cost;
    
    //Exit the program
    return 0;
}