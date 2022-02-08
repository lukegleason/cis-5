/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 12, 2022, 8:20 PM
 * Purpose:  Annual High Tempature
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
    int tempNYC, //tempature in NYC
        tempPNX; //tempature in Phoenix
    
    //Initialize Variables
    tempNYC=85;
    tempPNX=106;
    
    //Map the inputs/known to the outputs
    cout<<"--July Tempatures\nNYC: "<<tempNYC<<"\nPheonix: "<<tempPNX;
    cout<<"\n--July Tempatures (2% increase)\nNYC: "<< tempNYC*1.02<<"\nPheonix: "<<tempPNX*1.02;
    //Exit the program
    return 0;
}