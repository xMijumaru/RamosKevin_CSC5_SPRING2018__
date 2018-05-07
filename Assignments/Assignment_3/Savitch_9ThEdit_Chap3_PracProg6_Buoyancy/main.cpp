/* 
 * File:   main.cpp
 * Author:
 * Created on February 13, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <cmath>
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float f,//force
            volume,//volume
            radius,//radius
            y;//weight of the fluid
    float pi=3.1415;//value of pi
    float again;//loop
    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Display Outputs

    cout<<"Enter the weight of the sphere in LBS: "<<endl;
    cin>>y;
    cout<<"Enter the radius of the sphere in feet: "<<endl;
    cin>>radius;
    volume=(4/3)*pow(radius, 3);
    f=volume*radius;
    if(f>=y)
        cout<<"The sphere will sink in water"<<endl;
    else
        cout<<"The sphere will float in water"<<endl;
    cout<<"Do you want to try the program again?(Y/N): ";
    cin>>again;
    
            
    //Exit program!
    return 0;
}