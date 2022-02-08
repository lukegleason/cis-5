/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 8th, 2021, 10:41 AM
 * Purpose:  Basic Menu for Homework and Exams
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Srand
#include <ctime>     //Time library
#include <iomanip>   //Formatting Lbrary
#include <cmath>     //Math Library - Log Function
#include <string>
using namespace std;  //STD Name-space where Library is compiled

//User Libraries

//Global Constants not Variables
//Math/Physics/Science/Conversions/Dimensions

//Function Prototypes

//Code Begins Execution Here with function main
int main(int argc, char** argv) {
    //Set random number seed once here
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables here
    int choose;//Choose a problem
    
    //Initialize variables here
    do{
        //Display the menu
        cout<<endl;
        cout<<"Choose from the following Menu Items"<<endl;
        cout<<"Problem 0 - Gaddis_9thEd_Chap4_Prob8_SortNames"<<endl;
        cout<<"Problem 1 - Gaddis_9thEd_Chap4_Prob11_Books"<<endl;
        cout<<"Problem 2 - Gaddis_9thEd_Chap4_Prob12_BankCharges"<<endl;
        cout<<"Problem 3 - Gaddis_9thEd_Chap4_Prob14_Race"<<endl;
        cout<<"Problem 4 - Gaddis_9thEd_Chap4_Prob23_ISP"<<endl;
        cout<<"Problem 5 - Savitch_9thEd_Chap3_PracProb1_RockPaperScissors"<<endl;
        cout<<"Problem 6 - Savitch_9thEd_Chap3_Prob3_Roman_Conversion"<<endl;
        cout<<"Problem 7 - Savitch_9thEd_Chap3_PracProb4_CompatibleSigns"<<endl;
        cout<<"10 or greater, all negatives to exit"<<endl;
        cout<<endl;
        cin>>choose;
        
        //Display the Solution to the problems
        switch(choose){
            case 0:{  
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
                    break;}
            case 1:{    
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
                break;}
            case 2:{
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
                break;}
            case 3:{    //Declare Variables
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
                }break;}
            case 4:{    //Declare Variables
                char package;int hours;float cost;

                //Initialize Variables

                //Map the inputs/known to the outputs
                cout<<"ISP Bill\nInput Package and Hours\n";
                cin>>package>>hours;

                cout<<showpoint<<fixed;
                cout<<setprecision(2);

                if (package=='a' || package=='A'){
                    if(hours-10<0){
                        cost=9.95;
                    } else {
                        cost=(hours-10)*(2.00)+9.95;
                    }
                }

                if (package=='b' || package=='B'){
                    if(hours-20<0){
                        cost=14.95;
                    } else {
                        cost=(hours-20)*(1.00)+14.95;
                    }
                }

                if (package=='c' || package=='C'){
                    cost=19.95;
                }

                //Display the outputs
                cout<<"Bill = $ "<<cost;break;}
            case 5:{    //Declare Variables
                char choice1,choice2;

                //Map the inputs/known to the outputs & Display the outputs
                cout<<"Rock Paper Scissors Game\nInput Player 1 and Player 2 Choices\n";
                cin>>choice1>>choice2;

                if(choice1>=97){ //convert uppercase to lowercase
                    choice1-=32;
                }

                if(choice2>=97){
                    choice2-=32;
                }

                if(choice1==choice2){
                    cout<<"Nobody wins.";
                }

                if((choice1=='P' && choice2=='R')||(choice2=='P' && choice1=='R')){
                    cout<<"Paper covers rock.";
                }

                if((choice1=='R' && choice2=='S')||(choice2=='R' && choice1=='S')){
                    cout<<"Rock breaks scissors.";
                }

                if((choice1=='S' && choice2=='P')||(choice2=='S' && choice1=='P')){
                    cout<<"Scissors cuts paper.";
                }break;}
            case 6:{    //Declare variables here
                short algebra;
                string roman="";
                char n1000s,n100s,n10s,n1s;

                //Initialize variables here
                cout<<"Arabic to Roman numeral conversion.\nInput the integer to convert.\n";
                cin>>algebra;

                //Determine if an appropriate number
                if(algebra<=999 || algebra>=3000){
                    cout<<algebra<<" is Out of Range!";
                    exit(1);
                }

                //Calculate the number of powers of 10
                n1000s=algebra/1000;    //Strip 1000's
                n100s=algebra%1000/100; //Stripped the 100's place
                n10s=algebra%100/10;    //Stripped the 10's place
                n1s=algebra%10;         //Stripped the 1's place

                //Output Roman Numerals 1000's - Switch Case
                switch(n1000s){
                    case 3:roman+="M";
                    case 2:roman+="M";
                    case 1:roman+="M";
                }

                //Output Roman Numerals 100's -  Ternary Operator
                roman+=n100s==9?"CM":
                       n100s==8?"DCCC":
                       n100s==7?"DCC":
                       n100s==6?"DC":
                       n100s==5?"D":
                       n100s==4?"CD":
                       n100s==3?"CCC":
                       n100s==2?"CC":
                       n100s==1?"C":"";

                //Output Roman Numerals 10's - Dependent if
                if(n10s==9)roman+="XC";
                else if(n10s==8)roman+="LXXX";
                else if(n10s==7)roman+="LXX";
                else if(n10s==6)roman+="LX";
                else if(n10s==5)roman+="L";
                else if(n10s==4)roman+="XL";
                else if(n10s==3)roman+="XXX";
                else if(n10s==2)roman+="XX";
                else if(n10s==1)roman+="X";

                //Output Roman Numerals 10's - Independent if
                if(n1s==9)roman+="IX";
                if(n1s==8)roman+="VIII";
                if(n1s==7)roman+="VII";
                if(n1s==6)roman+="VI";
                if(n1s==5)roman+="V";
                if(n1s==4)roman+="IV";
                if(n1s==3)roman+="III";
                if(n1s==2)roman+="II";
                if(n1s==1)roman+="I";

                //Display the results
                cout<<algebra<<" is equal to "<<roman;break;}
            case 7:{    //Declare Variables
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

                cout<<answer1<<" and "<<answer2<<" are compatible "<<element<<" signs.";break;}
            default:cout<<"Exiting the Menu"<<endl;
        }
    }while(choose>=0 && choose<=9);

    return 0;
}