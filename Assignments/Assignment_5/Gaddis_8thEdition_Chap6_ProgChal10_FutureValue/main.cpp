/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 5, 2018, 10:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
using namespace std;

//Function calls
    //calls the future value function
float futureValue (float, float, float);

float month,//number of months that the interest will happen
        pres,//present value of the account
        inter,//interest rate
        conv,//converts the percent
        sum;//total future value
int main(int argc, char** argv) {
    cout << "This program calculates the future value after compound interest"
            <<endl;
    cout << "Enter the present monetary value of your account " << endl;
    cin>> pres;
    cout << "Enter the monthly interest of the account (in percent) " << endl;
    cin>>inter;
    cout << "Enter the amount of month(s) that compound interest that will be"
            <<"\nincurred for " <<endl;
    cin>>month;
    conv=inter*1e-2;//converts the interest rate to a decimal percentage
    sum=futureValue (pres, conv, month);
    cout << fixed << showpoint << setprecision(2);
    cout << "The future value of the account is $" << sum << endl;
    
    
    return 0;
}
float futureValue (float pres, float conv, float month)
{
    
    return pres * pow(1+conv, month);
    
}
