/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 30, 2022, 11:27 AM
 * Purpose:  War Project 1 Version 1 
 *           Started with Input validation
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <string>    //String Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Math Library
#include <cstdlib>   //General Purpose Library
#include <fstream>   //File Read/Write Library
#include <ctime>     //Time library

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
    srand(static_cast<unsigned>(time(0)));
    
    //Declare + Initialize Variables
    bool passed = false;         //INTRO -- Used to validate user input.
    string choice;               //INTRO -- Stores user's choice to be player one OR player two
    
    //Intro to user + Prompt the user to choosing a player
        cout<<"Welcome to the game of War!"<<endl;
        cout<<"Would you like to play as Player 1 or Player 2?"<<endl;
        cout<<"Type 'player1' or player2"<<endl;
        
    do {
        cin>>choice;
        //Input validation -- convert input to all uppercase
        for(int i=0;choice[i]!='\0';i++) {
          if(choice[i]<=122 && choice[i]>=97) //'122' = 'z' & '97' == 'a'
            choice[i]-=32;                    // Subtracting 32 converts to upper
        }
        
        //Input validation -- check if user inputted supported string
        if (choice == "PLAYER1" || choice == "PLAYER2"){
            passed = true;
        } else {
            cout<<"Invalid input. Please enter 'player1' OR 'player2'"<<endl;
        }
    } while (passed == false);
    
    
    //Exit the program
    return 0;
}