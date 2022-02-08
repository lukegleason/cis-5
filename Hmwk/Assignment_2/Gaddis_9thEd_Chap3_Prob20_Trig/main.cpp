/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 16, 2022, 9:52 PM
 * Purpose: Trig
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>
#include <math.h>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...
const float PI = 4*atan(1);
const float RADCNV = PI / 180;

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    
    //Declare Variables
    float angle,
          sinAngl,
          cosAngl,
          tanAngl;
            
    //Initialize or input i.e. set variable values
    cout << "Calculate trig functions\n";
    cout << "Input the angle in degrees.\n";
    cin >> angle;
    
    //Map inputs -> outputs
    sinAngl = sin(angle * RADCNV);
    cosAngl = cos(angle * RADCNV);
    tanAngl = abs(angle) == 90 || abs(angle) == 270
            ? INFINITY
            : tan(angle * RADCNV);
    
    //Display the outputs
    cout<<fixed<<setprecision(0)<<"sin("<<angle<<") = "<<fixed<<setprecision(4)<<setw(6)<<sinAngl<<"\n";
    cout<<fixed<<setprecision(0)<<"cos("<<angle<<") = "<<fixed<<setprecision(4)<<setw(6)<<cosAngl<<"\n";
    cout<<fixed<<setprecision(0)<<"tan("<<angle<<") = "<<fixed<<setprecision(4)<<setw(6)<<tanAngl;
    
    //Exit stage right or left!
    return 0;
}