/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <iomanip>
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
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=4;
    const unsigned int LOOP=500000;
    float RATIO;
    unsigned int amtL,amtU,amtK,amtE=0;
    unsigned int PASS=0;
    char name[SIZE];

    for (int i=1; i<LOOP; i++){
        //Random name
        name[0]=rand()%26+'A';
        name[1]=rand()%26+'A';
        name[2]=rand()%26+'A';
        name[3]=rand()%26+'A';
        
        //checking to see if name is LUKE
        if (name[0]=='L'){
            amtL=amtL+1;
            if (name[1]=='U'){
                amtU=amtU+1;
                if (name[2]=='K'){
                    amtK=amtK+1;
                    if (name[3]=='E')
                        amtE=amtE+1;
                        PASS=PASS+1;
                }
            }
        }
    }
    
    //Ratio Calculation
    RATIO = static_cast<float>(PASS)/static_cast<float>(LOOP);
    
    //Display the outputs
    cout<<amtL<<" "<<amtU<<" "<<amtK<<" "<<amtE<<"\n";
    cout<<"LOOP AMOUNT: "<<LOOP<<endl;
    cout<<"PASS AMOUNT: "<<PASS<<endl;
    cout << fixed << showpoint;
    cout << setprecision(10);
    cout<<"RATIO: "<<RATIO<<"&\n";
    //Exit the program
    return 0;
}