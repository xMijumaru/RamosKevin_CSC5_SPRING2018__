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
float f1= 1*1.8 + 32,
        f2=2*1.8 + 32,
        f3=3*1.8 + 32,
        f4=4*1.8 + 32,
        f5=5*1.8 + 32,
        f6=6*1.8 + 32,
        f7=7*1.8 + 32,
        f8=8*1.8 + 32,
        f9=9*1.8 + 32,
        f10=10*1.8 + 32,
        f11=11*1.8 + 32,
        f12=12*1.8 + 32,
        f13=13*1.8 + 32,
        f14=14*1.8 + 32,     
        f15=15*1.8 + 32,
        f16=16*1.8 + 32,
        f17=17*1.8 + 32,
        f18=18*1.8 + 32,
        f19=19*1.8 + 32,
        f20=20*1.8 + 32;
char again;
//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    do
    {
    //Output Located Here
  cout<<fixed<<setprecision(1)<<showpoint;  
    cout<<"Temperature table of conversion factors involving temperature";
    cout<<"\n1 degree Celsius"<<setw(14)<<f1<<" degrees Fahrenheit";
    cout<<"\n2 degree Celsius"<<setw(14)<<f2<<" degrees Fahrenheit";
     cout<<"\n3 degree Celsius"<<setw(14)<<f3<<" degrees Fahrenheit";
    cout<<"\n4 degree Celsius"<<setw(14)<<f4<<" degrees Fahrenheit";
     cout<<"\n5 degree Celsius"<<setw(14)<<f5<<" degrees Fahrenheit";
    cout<<"\n6 degree Celsius"<<setw(14)<<f6<<" degrees Fahrenheit";
     cout<<"\n7 degree Celsius"<<setw(14)<<f7<<" degrees Fahrenheit";
    cout<<"\n8 degree Celsius"<<setw(14)<<f8<<" degrees Fahrenheit";
       cout<<"\n9 degree Celsius"<<setw(14)<<f9<<" degrees Fahrenheit";
    cout<<"\n10 degree Celsius"<<setw(14)<<f10<<" degrees Fahrenheit";
     cout<<"\n11 degree Celsius"<<setw(14)<<f11<<" degrees Fahrenheit";
    cout<<"\n12 degree Celsius"<<setw(14)<<f12<<" degrees Fahrenheit";
     cout<<"\n13 degree Celsius"<<setw(14)<<f13<<" degrees Fahrenheit";
    cout<<"\n14 degree Celsius"<<setw(14)<<f14<<" degrees Fahrenheit";
     cout<<"\n15 degree Celsius"<<setw(14)<<f15<<" degrees Fahrenheit";
    cout<<"\n16 degree Celsius"<<setw(14)<<f16<<" degrees Fahrenheit";
    cout<<"\nDo you want to run this program again(Y/N)?"<<endl;
    cin>>again;
    }while (again=='y'||again=='Y');
    //Exit
    
    return 0;
}
