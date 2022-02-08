/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 13, 2022, 7:35 AM
 * Purpose:  Energy Drink Consumption
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
    float custmr, //number of customers total
          perWk,  // % of people who purchase one or more per week
          citrus, // ^ of these people, % of people who prefer citrus flavor.
          cstWk,  // total customers who purchased one or more per week.
          cstCtrs; // total customers who prefer citrus flavor.
    
    //Initialize Variables
    custmr=16500;
    perWk=.15;
    citrus=.58;
    
    //Map the inputs/known to the outputs
    cstWk=custmr*perWk;
    cstCtrs=cstWk*citrus;
    
    //Display the outputs
    cout<<"Total number of customers: "<<custmr;
    cout<<"\nNumber of customers who purchase one or more: "<<cstWk;
    cout<<"\nNumber of customers who prefer citrus: "<<cstCtrs;
    //Exit the program
    return 0;
}