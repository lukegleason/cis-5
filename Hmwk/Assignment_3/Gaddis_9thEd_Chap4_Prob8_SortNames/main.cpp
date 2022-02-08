/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on January 30, 2022, 8:18 PM
 * Purpose:  Gaddis_9thEd_Chap4_Prob8_SortNames
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String library
using namespace std;

//User Libraries

//Global Constants, no Global Variables are allowed
//Math/Physics/Conversions/Higher Dimensions - i.e. PI, e, etc...

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
   //Declare Variables
    string name1,name2,name3;
    int result;
    
    //Initialize or input i.e. set variable values
    cout<<"Sorting Names\nInput 3 names\n";
    cin>>name1>>name2>>name3;
    
    //Map inputs -> outputs
    if(name1.compare(name2)>0 && name1.compare(name3)>0){ //if name1 is last
        if(name2.compare(name3)>0){
            cout<<name3<<endl<<name2<<endl<<name1;
        } else {
            cout<<name2<<endl<<name3<<endl<<name1;
        }
    }
    
    if(name2.compare(name1)>0 && name2.compare(name3)>0){ //if name2 is last
        if(name1.compare(name3)>0){
            cout<<name3<<endl<<name1<<endl<<name2;
        } else {
            cout<<name1<<endl<<name3<<endl<<name2;
        }
    }
    
    if(name3.compare(name1)>0 && name3.compare(name2)>0){ //if name3 is last
        if(name1.compare(name2)>0){
            cout<<name2<<endl<<name1<<endl<<name3;
        } else {
            cout<<name1<<endl<<name2<<endl<<name3;
        }
    }

    //Exit stage right or left!
    return 0;
}