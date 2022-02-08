/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <cstring> //strings
using namespace std;

//User Defined Libraries

//Global Constants, not Global Variables
//These are recognized constants from the sciences
//Physics/Chemistry/Engineering and Conversions between
//systems of units!

//Function Prototypes

//Execution begins here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned char n1000s,n100s,n10s,n1s;
    unsigned short arabic;
    string roman="";
    
    //Initialize Variables
    cout<<"Input a interger between 0-3000\n";
    cin>>arabic;
    
    //Map the inputs/known to the outputs
    n1000s=arabic/1000;
    n100s=(arabic-n1000s*1000)/100;
    n10s=arabic%100/10;
    n1s=arabic%10;
    
    //Display the outputs
    cout<<arabic<<" = "<<static_cast<int>(n1000s)
            <<static_cast<int>(n100s)
            <<static_cast<int>(n10s)
            <<static_cast<int>(n1s)
            <<"\n";
    
    //Convert the 1000's place
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }

    if(n100s=9){
        
    }
    //Output the conversion
    cout<<roman<<" = "<<arabic<<"\n";
    
    //Exit the program
    return 0;
}