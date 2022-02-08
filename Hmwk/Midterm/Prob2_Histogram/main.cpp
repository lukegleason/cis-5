/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on 1/27/22 1:49PM 
 * Purpose:  Histogram
 */

//System Libraries Here
#include <iostream>
#include <cstring> //strings
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int n1000s,n100s,n10s,n1s;
    int number;
    
    //Input or initialize values Here
    cout<<"Create a histogram chart."<<endl;
    cout<<"Input 4 digits as characters."<<endl;
    cin>>number;
    
    //seperate numbers
    n1000s=number/1000;
    n100s=(number-n1000s*1000)/100;
    n10s=number%100/10;
    n1s=number%10;
    
    //Histogram Here
    // 1000's
    cout<<static_cast<>(n1000s)<<" "; //print int
    if(n1000s==9) cout<<"*********";
    if(n1000s==8) cout<<"********";
    if(n1000s==7) cout<<"*******";
    if(n1000s==6) cout<<"******";
    if(n1000s==5) cout<<"*****";
    if(n1000s==4) cout<<"****";
    if(n1000s==3) cout<<"***";
    if(n1000s==2) cout<<"**";
    if(n1000s==1) cout<<"*";
    else cout<<"?";

    //Exit
    return 0;
}