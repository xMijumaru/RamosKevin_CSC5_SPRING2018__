/* 
 * File:   main.cpp
 * Author:
 * Created on February 13, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
#include <fstream>
using namespace std;//namespace I/O stream library created

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float totalG,
            total,
            mile,
            liter;
    char again;
    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Display Outputs
   
    
    cout<<"This is a MPG calculator that uses liters and miles"<<endl;
            cout<<"Enter the number of miles you have driven: ";
            cin>>mile;
            if (mile>=0)
            { 
           cout<<"Enter the amount of liters that was used: ";
           cin>>liter;
            }else cout<<"Invalid characters";
            
    if(mile>=0&&liter>=0)
    {
        totalG=liter*(0.264179);
        total=mile/totalG;
        int round=static_cast<int>((total+0.005)*100);
        total=round/100.0f;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<"The Miles per Gallon is: "<<setw(2)<<total<<endl;   
    }
    else cout<<"Calculation is invalid";

       //Exit program!
    return 0;
}