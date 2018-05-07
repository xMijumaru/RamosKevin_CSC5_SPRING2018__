/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *Using falling distance formula
 * Created on May 4, 2018, 11:17 PM
 */

#include <cstdlib>
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//Function call
float fallingdistance (float);

int main(int argc, char** argv) {
//Declare variables here
    float time,
            sum;
            
    cout << "This program calculates the amount the distance an object falls";
    cout << "\nin a specific time period" << endl;
    cout << "Enter the amount of time the item was falling (in seconds): " << endl;
    cin >> time;
    sum = fallingdistance(time);
    cout << "The falling distance of the object is " 
         <<sum << " Meters" << endl;
    return 0;
}
float fallingdistance (float time)
{
   
    return (time*9.8) * (time * 9.8) * 0.5;
}
