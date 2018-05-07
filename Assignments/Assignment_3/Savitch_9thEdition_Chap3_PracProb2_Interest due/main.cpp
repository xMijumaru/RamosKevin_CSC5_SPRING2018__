/* 
 * File:   main.cpp
 * Author:Kevin Ramos
 * Created on March 18, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip> 
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
 float amount, //amount of the account balance that will be inputed
      interest,//interest that the person owes as a result of his poor decisions
       total,//total that will be due at the end of the cycle
       less,//interest the amount is less than 1000 inside my else statement
       more;//interest the amount is greater than 1000 in my else statement
       
         
    //Initial Variables
    int pennies=static_cast<int>((interest+0.005)*100);
     interest=pennies/100.0;
    //Map/Process Inputs to Outputs
 cout<<"This program calculates the amount of interest you owe"<<endl;
 do
 {
 cout<<"Enter your account balance: ";
 cin>>amount;
 }while (amount<0);
 
 if (amount<=0)
     interest=0, total=amount+interest;
 else if ((amount>0)&&(amount<=1000))
     interest=(0.015*amount), total=amount+interest;
 else //amount of the credit card debt is greater than 1000 dollars
 {
     less=(0.015*1000);
     more=(0.01*(amount-1000));
     interest=less+more;
     total=amount+less+more;
     
 }
    //Display Outputs
 cout<<fixed<<setprecision(2)<<showpoint;
 cout<<"Total interest due:  "<<interest<<endl;
 cout<<"Total amount due:    "<<total<<endl;
    //Exit program!
    return 0;
} 
