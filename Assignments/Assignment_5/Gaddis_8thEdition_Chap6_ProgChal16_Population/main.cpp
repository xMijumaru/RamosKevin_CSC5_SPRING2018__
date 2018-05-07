/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 6, 2018, 2:49 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

//function declaration
float population (float, float, float, float);
int main(int argc, char** argv) {
    //declare variables here
    float p,      //current population size
            year,//years to calculate ahead
            birth,//annual birth rate
            birthp,//birthrate percentage
            death,//annual death rate
    deathp;//death rate percentages
    float sum;//answer to all the data
    
    cout << "Population program" <<endl;
    cout << "What is the current population" << endl;
    cin>>p;
    cout << "How many years do you want to calculate" <<endl;
    cin >>year;
    cout << "What is the birth rate in percentages" <<endl;
    cin>>birth;
    cout<<"What is the death rate in percentages" << endl;
    cin >> death;
    
       
    //output
   sum=  population (p,year, birth, death);
   cout << "In " << year << " year(s), the population will be " <<endl;
   cout << "approximately " << static_cast<int>(sum) << " inhabitants" <<endl;
    
    return 0;
    
}
float population (float p, float year, float birth, float death)
{
     //Equations processed
    float deathp=death*1e-2;
    float birthp=birth*1e-2;

    float sum;
    sum=(p + (birthp * p) - (deathp * p));
    return sum;
    
}
