/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 12, 2022, 4:46 PM
 * Purpose:  Big C
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
    char c;
    //Initialize Variables
    
    //Map the inputs/known to the outputs
    cout<<"Big C maker\nInput the character your want!: ";
    cin>>c;
    
    //Display the outputs
    cout<<"   "<<c<<c<<c<<"\n";
    cout<<"  "<<c<<"   "<<c<<"\n";
    cout<<c<<"\n";
    cout<<c<<"\n";
    cout<<c<<"\n";
    cout<<c<<"\n";
    cout<<c<<"\n";
    cout<<"  "<<c<<"   "<<c<<"\n";
    cout<<"   "<<c<<c<<c<<"\n";
    //Exit the program
    return 0;
}