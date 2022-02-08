/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 11, 2022, 11:54 AM
 * Purpose:  Lab Excercise 1
 *           Evaluate gas stations based on proximity/price.
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
    double gasPerc, // Gas Gage % Full
            gasTank, // Size of Tank in Gallons
            gasMpg, // Gas Mileage mpg
            st1Gas, // GAS STATION 1: Regular Gas$/Gallon
            st1Mile, // GAS STATION 1: Miles to Gas Station
            st2Gas, // GAS STATION 2: Regular Gas$/Gallon
            st2Mile, // GAS STATION 2: Miles to Gas Station
            
            gasNeed, // Gallons required to fill up
            st1Cost, // Cost to fill up
            st1Dist, // Total Distance driven in Miles back and forth to Gas Station
            st1CstD, // Cost to drive distance to and from gas station $
            st1Totl, // Total Cost $ with mileage to gas station
            st1CstT, // $ Price per gallon when adding in mileage to station

            st2Cost, // Cost to fill up
            st2Dist, // Total Distance driven in Miles back and forth to Gas Station
            st2CstD, // Cost to drive distance to and from gas station $
            st2Totl, // Total Cost $ with mileage to gas station
            st2CstT; // $ Price per gallon when adding in mileage to station
            
            
            
    //Initialize Variables
    gasPerc=0.75;
    gasTank=22;
    gasMpg=17;
    
    st1Gas=4.25;
    st1Mile=10;
    
    st2Gas=4.09;
    st2Mile=20;
    
    //Map the inputs/known to the outputs
    gasNeed=gasTank*(1-gasPerc);
    
    st1Cost=st1Gas*gasNeed;
    st1Dist=2*st1Mile;
    st1CstD=st1Dist/gasMpg*st1Gas;
    st1Totl=st1Cost+st1CstD;
    st1CstT=st1Totl/gasNeed;
    
    st2Cost=st2Gas*gasNeed;
    st2Dist=2*st2Mile;
    st2CstD=st2Dist/gasMpg*st2Gas;
    st2Totl=st2Cost+st2CstD;
    st2CstT=st2Totl/gasNeed;
    
    
    //Display the outputs
    cout<<"--Knowns for Your Particular Vehicle\n";
    cout<<gasPerc<<" = Gas Gage % full\n";
    cout<<gasTank<<" = Size of Tank in Gallons\n";
    cout<<gasMpg<<" = Gas Mileage MPG\n";
    cout<<gasNeed<<" = Gallons Required to fill up\n";
    
    cout<<"\n--Calculate the cost of Gas Station 1\n";
    cout<<st1Gas<<" = Regular Gas $/Gallon\n";
    cout<<st1Mile<<" = Miles to Gas Station\n";
    cout<<st1Cost<<" = Cost to fill up\n";
    cout<<st1Dist<<" = Total Distance driven in Miles back and forth to Gas Station\n";
    cout<<st1CstD<<" = Cost to drive distance to and from gas station $\n";
    cout<<st1Totl<<" = Total Cost $ with mileage to gas station\n";
    cout<<st1CstT<<" = $ Price per gallon when adding in mileage to station\n";
    
    cout<<"\n--Calculate the cost of Gas Station 2\n";
    cout<<st2Gas<<" = Regular Gas $/Gallon\n";
    cout<<st2Mile<<" = Miles to Gas Station\n";
    cout<<st2Cost<<" = Cost to fill up\n";
    cout<<st2Dist<<" = Total Distance driven in Miles back and forth to Gas Station\n";
    cout<<st2CstD<<" = Cost to drive distance to and from gas station $\n";
    cout<<st2Totl<<" = Total Cost $ with mileage to gas station\n";
    cout<<st2CstT<<" = $ Price per gallon when adding in mileage to station\n";
    //Exit the program
    return 0;
}
