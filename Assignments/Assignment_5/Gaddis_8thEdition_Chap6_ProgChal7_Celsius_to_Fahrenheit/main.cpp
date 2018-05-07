/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 4, 2018, 7:14 PM
 */

#include <cstdlib>
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cstdlib>

//Function calls
float conversion (float, float);

using namespace std;


int main(int argc, char** argv) {
//Declare the variables here
    float total;
    float value1;
    cout << "Fahrenheit to Celsius conversion table" << endl;
    cout << "from 1 - 20 degrees " << endl;
        
 conversion (0, 20);
    
    
    return 0;
}

float conversion (float start, float end)
{
    for (float beg=start; beg<=end; beg++)
    {
        cout << fixed << showpoint << setprecision(1);
        cout << setw(2) << static_cast<int>(beg) 
             << setw(15) 
             << (beg-32) * 5/9  << endl;
    }

    
}