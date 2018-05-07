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
    float speeds,
            times;
    char again;
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here
    do
    {
    cout<<"Distance chart"<<endl;
    cout<<"Enter the constant velocity of your vehicle in miles"<<endl;
    cin>>speeds;
    cout<<"How many hours did it take you to reach your location?"<<endl;
    cin>>times;
    cout<<"Hours          Distance traveled"<<endl;
     cout<<fixed<<setprecision(2)<<showpoint;
    
        for (int time=1;time<=times;time++)
        {
            cout<<setw(2)<<time<<" hour"
          <<setw(14)<<speeds/times<<" miles"<<endl;
        }
     cout<<"Do you want to run this program again(Y/N): ";
             cin>>again;
    }while(again=='y'||again=='y');
    //Exit
    return 0;
}
