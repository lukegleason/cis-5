/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on January 30, 2022, 8:43 PM
 * Purpose:  Gaddis_9thEd_Chap4_Prob11_Books
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int bksPrch; // books purchased
    int points;
    
    //Initialize or input i.e. set variable values
    cout<<"Book Worm Points\nInput the number of books purchased this month.\n";
    cin>>bksPrch;
    
    //Map inputs -> outputs
    if (bksPrch<4){
        switch(bksPrch){
            case 0: points=0;break;
            case 1: points=5;break;
            case 2: points=15;break;
            case 3: points=30;break;
        }
    } else {
        points=60;
    }
    
    //Display the outputs
    cout<<"Books purchased =  "<<bksPrch<<endl;
    cout<<"Points earned   = "<<points;
    
    //Exit stage right or left!
    return 0;
}