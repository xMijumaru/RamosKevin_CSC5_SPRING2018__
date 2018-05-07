/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *Prime
 * Created on May 6, 2018, 2:05 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
using namespace std;


//function calls
bool isprime (int);

int main(int argc, char** argv) {
    //Declare the variables here
    int num;//number that will be inputed by the person
    bool solu; //solution to the problem
    //display output
    cout << "This program articulates whether the number inputed is prime or not";
    cout << "\nEnter the number you want to check: " <<endl;
    cin >>num;
    solu=isprime(num);
    if (solu==true)
        cout << "The number is Prime" << endl;
    else if (solu==false)
        cout << "The number is not Prime" <<endl;
    
    return 0;
}
bool isprime (int num)
{
    
    for (int A=2; A<=sqrt(num); A++)
    {
        
        if (num % A == 0)
            return false;
        
        else return true;
    }
    
    
}
