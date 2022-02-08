/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on February 1, 2022, 4:06PM 
 * Purpose:  War Project 1 Version 3
 *           Game Implementation
 *           (No war sequence)
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
    bool passed = false;           //INTRO -- Used to validate user input.
    string choice;                 //INTRO -- Stores user's choice to be player one OR player two
    string randCrd;                //GAME -- Stores random card
    int randNum;                   //Game -- Random number to choose card
    char cardP1=0,cardP2=0;            //GAME -- Stores each player's card
    short totalP1=26,totalP2=26;     //GAME -- Keeps track of number of cards.
    int i;                         //GAME -- Loop increment
    string enter;                  //GAME -- Used to add a break between sequences
    
    //INTRO -- Prompt the user to choosing a player
        cout<<"Welcome to the game of War!"<<endl;
        cout<<"Would you like to play as Player 1 or Player 2?"<<endl;
        cout<<"Type 'player1' or 'player2'"<<endl;
        
    do { //Do-while loop to repeat until user provides proper input
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
    
    while (totalP1 !== 0 || totalP2 !== 0){
        //Card generation 
        i=0;
        while (i<=2) {
            randNum = rand()%12;
            switch (randNum){
                case 1: randCrd = "1";break;
                case 2: randCrd = "2";break;
                case 3: randCrd = "3";break;
                case 4: randCrd = "4";break;
                case 5: randCrd = "5";break;
                case 6: randCrd = "6";break;
                case 7: randCrd = "7";break;
                case 8: randCrd = "8";break;
                case 9: randCrd = "9";break;
                case 10: randCrd = "J";break;
                case 11: randCrd = "K";break;
                case 12: randCrd = "Q";break;

            }
            // Give random card to either player 1 or player 2
            if (i == 0){
                cardP1 = static_cast<char>(randCrd[0]);

            }
            if (i == 1){
                cardP2 = static_cast<char>(randCrd[0]);
            }
            i++;
        }

        cout<<"Player 1: "<<cardP1<<endl;
        cout<<"Player 2: "<<cardP2<<endl;
        //Note: I'm able to compare even the 
        if (cardP1 > cardP2){ //If Player1's card is greater
            totalP1++;
            totalP2--;
        }

        if (cardP1 < cardP2){ //If Player 2's card is greater
            totalP1--;
            totalP2++;
        }

        if (cardP1 == cardP2){ //If Player 1 & 2's card are equal

        }
        cout<<"Player 1 total cards:\t"<<totalP1<<endl;
        cout<<"Player 2 total cards:\t"<<totalP2<<endl;
        cout<<"Round Complete. Type anything & press enter to continue."<<endl;
        cin>>enter;
    }
    //Exit the program
    return 0;
}