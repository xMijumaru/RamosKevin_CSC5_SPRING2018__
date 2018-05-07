/* 
 * File:   main.cpp
 * Author:
 * Created on 
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
    float rate;
    float increase;
    float per;
    char again;
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
   do
   {
   cout<<"Membership increase";
    cout<<"\nEnter your current membership rate: "<<endl;
    cin>>rate;
    per=rate*0.04;
    increase=rate+per;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Year               New Price";
    cout<<"\nYear 1"<<setw(14)<<"$"<<increase;
    cout<<"\nYear 2"<<setw(14)<<"$"<<increase+per;
    cout<<"\nYear 3"<<setw(14)<<"$"<<increase+per+per;
    cout<<"\nYear 4"<<setw(14)<<"$"<<increase+per+per+per;
    cout<<"\nYear 5"<<setw(14)<<"$"<<increase+per+per+per+per;
    cout<<"\nYear 6"<<setw(14)<<"$"<<increase+per+per+per+per+per;
    cout<<"\nDo you want to run the program again(Y/N)?"<<endl;
    cin>>again;
   }while(again=='y'||again=='Y');
    //Exit
    return 0;
}
