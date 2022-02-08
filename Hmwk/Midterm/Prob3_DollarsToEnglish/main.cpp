/* 
 * File:   main.cpp
 * Author: Luke Gleason
 * Created on 1/27/22 3:18PM
 * Purpose:  Convert a number to English check amount
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int n1000s,n100s,n10s,n1s;
    unsigned short number;
    
    //Input or initialize values Here
    cout<<"Input an integer [1-3000] convert to an English Check value."<<endl;
    cin>>number;
    
    //Calculate the 1000's, 100's, 10's and 1's
    n1000s=number/1000;
    number-=n1000s*1000;
    n100s=number/100;
    number-=n100s*100;
    n10s=number/10;
    number-=n10s*10;
    n1s=number;
    
    //Output the check value
    switch(n1000s){
        case 3:cout<<"Three Thousand ";break;
        case 2:cout<<"Two Thousand ";break;
        case 1:cout<<"One Thousand ";break;
    };
    
    switch(n100s){
        case 9:cout<<"Nine Hundred ";break;
        case 8:cout<<"Eight Hundred ";break;
        case 7:cout<<"Seven Hundred ";break;
        case 6:cout<<"Six Hundred ";break;
        case 5:cout<<"Five Hundred ";break;
        case 4:cout<<"Four Hundred ";break;
        case 3:cout<<"Three Hundred ";break;
        case 2:cout<<"Two Hundred ";break;
        case 1:cout<<"One Hundred ";break;  
    };
    
    switch(n10s) {
        case 9:cout<<"Ninety ";break;
        case 8:cout<<"Eighty ";break;
        case 7:cout<<"Seventy ";break;
        case 6:cout<<"Sixty ";break;
        case 5:cout<<"Fifty ";break;
        case 4:cout<<"Forty ";break;
        case 3:cout<<"Thirty ";break;
        case 2:cout<<"Twenty ";break;
        case 1:
            switch(n1s){
                case 9:cout<<"Nineteen ";break;
                case 8:cout<<"Eighteen ";break;
                case 7:cout<<"Seventeen ";break;
                case 6:cout<<"Sixteen ";break;
                case 5:cout<<"Fifteen ";break;
                case 4:cout<<"Fourteen ";break;
                case 3:cout<<"Thirteen ";break;
                case 2:cout<<"Twelve ";break;
            };
    };
    if (n10s!=1){
        switch(n1s){
            case 9:cout<<"Nine ";break;
            case 8:cout<<"Eight ";break;
            case 7:cout<<"Seven ";break;
            case 6:cout<<"Six ";break;
            case 5:cout<<"Five ";break;
            case 4:cout<<"Four ";break;
            case 3:cout<<"Three ";break;
            case 2:cout<<"Two ";break;
        case 1:cout<<"One ";break; 
        }
    }
    cout<<"and no/100's Dollars"<<endl;
    
    //Exit
    return 0;
}