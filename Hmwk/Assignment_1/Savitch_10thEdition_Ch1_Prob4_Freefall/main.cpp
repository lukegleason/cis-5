/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 12, 2022, 4:41 PM
 * Purpose:  Calculate distance of freefall based on user-
 *           inputted data of time.
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
    int time,dist;
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    cout<<"--Freefall Distance Calculator--\nPlease input your time: ";
    cin>>time;
    dist=time*time*32;
   
    //Display the outputs
    cout<<"\nYour distance: "<<dist/2;
    //Exit the program
    return 0;
}