/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 30, 2022, 9:15 PM
 * Purpose:  Place the runners.
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //IO Manip
#include <string>    //String
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string racer1,racer2,racer3;
    int time1,time2,time3;
    
    //Initialize or input i.e. set variable values
    cout<<"Race Ranking Program\nInput 3 Runners\nTheir names, then their times\n";
    cin>>racer1>>time1>>racer2>>time2>>racer3>>time3;
    
    //Map inputs -> outputs
    if(time1<time2 && time1<time3){
        if (time2<time3){
            cout<<racer1<<"\t"<<time1<<endl<<racer2<<"\t"<<time2<<endl<<racer3<<"\t"<<time3<<endl;
        } else {
            cout<<racer1<<"\t"<<time1<<endl<<racer3<<"\t"<<time3<<endl<<racer2<<"\t"<<time2<<endl;
        }
    }
    
    if(time2<time1 && time2<time3){
        if (time1<time3){
            cout<<racer2<<"\t"<<time2<<endl<<racer1<<"\t"<<time1<<endl<<racer3<<"\t"<<time3<<endl;
        } else {
            cout<<racer2<<"\t"<<time2<<endl<<racer3<<"\t"<<time3<<endl<<racer1<<"\t"<<time1;
        }
    }
    
    if(time3<time1 && time3<time2){
        if (time1<time2){
            cout<<racer3<<"\t"<<time3<<endl<<racer1<<"\t"<<time1<<endl<<racer2<<"\t"<<time2<<endl;
        } else {
            cout<<racer3<<"\t"<<time3<<endl<<racer2<<"\t"<<time2<<endl<<racer1<<"\t"<<time1;
        }
    }

    //Exit stage right or left!
    return 0;
}