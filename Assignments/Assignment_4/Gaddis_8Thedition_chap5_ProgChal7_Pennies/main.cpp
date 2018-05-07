/* 
 * File:   main.cpp
 * Author: 
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    unsigned int totpay,pyprday;
    char numdays=31, again;//most numbers of days in a month
    
    //Input or initialize values Here
   do
   {
    totpay;//total amount
    pyprday=1;//1 penny on the first day
    
    //Process/Calculations Here
    
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<" Day       Pay          Total"<<endl;
   for(int day=1;day<=numdays;day++)
   {
       cout<<setw(2)<<day
               <<setw(12)<<pyprday/100.0f
               <<setw(14)<<totpay/100.0f<<endl;
       pyprday*=2;
       totpay+=pyprday;
   }
    cout<<"Do you want to run this program again?(Y/N):"<<endl;
    cin>>again;
    }while(again=='y'||again=='Y');
    //Output Located Here


    //Exit
    return 0;
}
