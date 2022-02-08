/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 31, 2022, 8:30 AM
 * Purpose:  If your into horoscopes, then you are compatible with the problem?
 */

//System Level Libraries
#include <iostream>  //Input-Output Library
#include <string>    //string
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
    string answer1,answer2;       //user answers
    int elem1,elem2;              //different elements
    string element;               //element   
    
    //Map the inputs/known to the outputs
    cout<<"Horoscope Program which examines compatible signs.\nInput 2 signs.\n";
    cin>>answer1>>answer2;
    
    if(answer1=="Aries")elem1=1;
    if(answer1=="Leo")elem1=1;
    if(answer1=="Sagittarius")elem1=1;
    if(answer1=="Taurus")elem1=2;
    if(answer1=="Virgo")elem1=2;
    if(answer1=="Capricorn")elem1=2;
    if(answer1=="Gemini")elem1=3;
    if(answer1=="Libra")elem1=3;
    if(answer1=="Aquarius")elem1=3;
    if(answer1=="Cancer")elem1=4;
    if(answer1=="Scorpio")elem1=4;
    if(answer1=="Pisces")elem1=4;
    
    if(answer2=="Aries")elem2=1;
    if(answer2=="Leo")elem2=1;
    if(answer2=="Sagittarius")elem2=1;
    if(answer2=="Taurus")elem2=2;
    if(answer2=="Virgo")elem2=2;
    if(answer2=="Capricorn")elem2=2;
    if(answer2=="Gemini")elem2=3;
    if(answer2=="Libra")elem2=3;
    if(answer2=="Aquarius")elem2=3;
    if(answer2=="Cancer")elem2=4;
    if(answer2=="Scorpio")elem2=4;
    if(answer2=="Pisces")elem2=4;
    
    //Display the outputs
    if(elem1!=elem2){
        cout<<answer1<<" and "<<answer2<<" are not compatible signs.";
        exit(0);
    }
    
    switch(elem1){
        case 1: element="Fire";break;
        case 2: element="Earth";break;
        case 3: element="Air";break;
        case 4: element="Water";break;
    }
    
    cout<<answer1<<" and "<<answer2<<" are compatible "<<element<<" signs.";
    //Exit the program
    return 0;
}