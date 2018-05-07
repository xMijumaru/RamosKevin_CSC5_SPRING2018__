/* 
 * File:   main.cpp
 * Author:
 * Created on February 13, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int temp, digit, digit2, digit3, lowtemp, hightemp;
    bool missing;
   //beginning
    cout<<"Enter the temperature "<<endl;
    cin>>temp;
    //Initial Variables
    lowtemp=temp;
    digit=lowtemp % 10;
    digit2=(lowtemp/10)%10;
    digit3=(lowtemp/100);
    if((digit==1)||(digit==4)||(digit==7)||
            (digit2==1)||(digit2==4)||(digit2==7)||
            (digit3==1)||(digit3==4)||(digit3==7))
            missing=true;
    else missing=false;
    while (missing)
    {
    lowtemp--;
    digit=lowtemp % 10;
    digit2=(lowtemp/10)%10;
    digit3=(lowtemp/100);
    if((digit==1)||(digit==4)||(digit==7)||
            (digit2==1)||(digit2==4)||(digit2==7)||
            (digit3==1)||(digit3==4)||(digit3==7))
            missing=true;
    else missing=false;
    }
    //higher temperature
    hightemp=temp;
    digit=hightemp % 10;
    digit2=(hightemp/10)%10;
    digit3=(hightemp/100);
    if((digit==1)||(digit==4)||(digit==7)||
            (digit2==1)||(digit2==4)||(digit2==7)||
            (digit3==1)||(digit3==4)||(digit3==7))
            missing=true;
    else missing=false;
    while (missing)
    {
        hightemp++;
       
    digit=hightemp % 10;
    digit2=(hightemp/10)%10;
    digit3=(hightemp/100);
    if((digit==1)||(digit==4)||(digit==7)||
            (digit2==1)||(digit2==4)||(digit2==7)||
            (digit3==1)||(digit3==4)||(digit3==7))
            missing=true;
    else missing=false;
    }
    cout<<"The closest working temperature is "<<lowtemp<<endl;
    cout<<"The highest temperature is "<<hightemp<<endl;
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    char ch;
    cin>>ch;
    //Exit program!
    return 0;
}