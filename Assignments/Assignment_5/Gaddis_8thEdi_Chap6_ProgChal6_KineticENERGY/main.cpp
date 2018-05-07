/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *Kinetic energy program that will output in Joules
 * Created on May 4, 2018, 10:54 PM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

//Declare the function calls
float KineticEnergy (float,float);//Kinetic Energy function

int main(int argc, char** argv) {
//Declare variables here
    float mass,     //Mass of the vehicle in kilograms
            sum,    //Total amount of kinetic energy exerted by the object
            vel;        //Velocity of the vehicle
    
    cout << "This program calculates the amount of Kinetic Energy exerted by an"
         << "\nobject" << endl;
    cout << "\nEnter the mass of the object in Kilograms: ";
    cin >> mass;
    cout << "\nEnter the constant velocity of the object in Meters per Second: ";
    cin >> vel;
    
    sum=KineticEnergy(mass, vel);//The function will return the answer 
    
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "The kinetic energy for the object is " << sum << " Joules " << endl;
    
    return 0;
}
float KineticEnergy (float mass,float vel)
{
    
    return (mass*vel)*(mass*vel) * (0.5);//function that returns answer

}
