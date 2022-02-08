/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 13, 2022, 7:25 AM
 * Purpose:  Acre Calculation
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!
const float ACRE=43560; // How much an acre is in feet.

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Initialize Random Seed once here!
    
    //Declare Variables
    float land,  //Amount of land in feet.
          reslt; //The result; how much arces in variable land.
    
    //Initialize Variables
    land=391876;
    
    //Map the inputs/known to the outputs
    reslt=land/ACRE;
    
    //Display the outputs
    cout<<"You have "<<reslt<<" amount of acres.";
    
    //Exit the program
    return 0;
}