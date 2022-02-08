/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 3, 2022, 11:20 AM
 * Purpose:  All Projects start by using the CPP Template
 *           It shows where to place/code your projects
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
    //Declare Variables
    char choice1,choice2;
    
    //Map the inputs/known to the outputs & Display the outputs
    cout<<"Rock Paper Scissors Game\nInput Player 1 and Player 2 Choices\n";
    cin>>choice1>>choice2;
    
    if(choice1>=97){ //convert uppercase to lowercase
        choice1-=32;
    }
    
    if(choice2>=97){
        choice2-=32;
    }
    
    if(choice1==choice2){
        cout<<"Nobody wins.";
    }
    
    if((choice1=='P' && choice2=='R')||(choice2=='P' && choice1=='R')){
        cout<<"Paper covers rock.";
    }
    
    if((choice1=='R' && choice2=='S')||(choice2=='R' && choice1=='S')){
        cout<<"Rock breaks scissors.";
    }
    
    if((choice1=='S' && choice2=='P')||(choice2=='S' && choice1=='P')){
        cout<<"Scissors cuts paper.";
    }

    //Exit the program
    return 0;
}