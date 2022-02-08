/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 30, 2022, 8:52 PM
 * Purpose:  Gaddis_9thEd_Chap4_Prob12_BankCharges
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float bal,checks,chckFee,lowBal,newBal,mnthFee;
    
    //Initialize or input i.e. set variable values
    mnthFee=10;
    cout<<"Monthly Bank Fees\nInput Current Bank Balance and Number of Checks\n";
    cin>>bal>>checks;
    
    //Map inputs -> outputs
    if (checks>=60){ //Determine pricing for checks
        chckFee=checks*.04;
    } else if (checks>=40 && checks<=59) {
        chckFee=checks*.06;
    } else if (checks>=20 && checks<=39) {
        chckFee=checks*.08;
    } else {
        chckFee=checks*.10;
    }
    
    if (bal<400){
        lowBal=15;
    } else {
        lowBal=0;
    }
    
    newBal=bal-(chckFee+mnthFee+lowBal);
    //Display the outputs
    cout<<showpoint<<fixed;
    cout<<setprecision(2);
    cout<<"Balance     $   "<<bal<<endl;
    cout<<"Check Fee   $     "<<chckFee<<endl;
    cout<<"Monthly Fee $    10.00\n";
    cout<<"Low Balance $    "<<lowBal<<endl;
    cout<<"New Balance $    "<<newBal;
    
    
    //Exit stage right or left!
    return 0;
}