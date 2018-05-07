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
    float fah;//fahrenheit
    float cel;//celsius
    char again;//input
    //Initial Variables
    
    //Map/Process Inputs to Outputs

    //Display Outputs
    do
    {
    cout<<"Enter the degrees in Celsius in order to be converted into"
            " Fahrenheit"<<endl;
    cin>>cel;
    fah=((9 * cel)/5)+32;
    cout<<"The temperature in Fahrenheit is "<<fah<<" degrees"<<endl;
    cout<<"Do you want to continue converting(Y/N): ";
    cin>>again;
    }while (again=='Y' || again=='y');
    //Exit program!
    return 0;
}