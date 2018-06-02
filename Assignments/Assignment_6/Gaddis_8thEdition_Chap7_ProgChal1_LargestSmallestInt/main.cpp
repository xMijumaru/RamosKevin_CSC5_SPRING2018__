/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *purpose : counts the largest and smallest integer
 * Created on May 16, 2018, 3:25 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;


int main(int argc, char** argv) {
    //Declare the variables here
   const int num=10;
   int array[num];
   int lar;
   int smal, total;
    
    int answer; //The one that is being compared
    //Process equations
    cout << "Enter 10 integers to to display the highest to lowest" << endl;
    for (int quan=0;quan<10; quan ++)
    {
        cout << "Enter integer #" << quan+1 << ": ";
        cin >> array [quan];
    }
    smal= array[0];
    lar= array[0];
    for (int i = 0; i <= 9; i ++) //Checks the 10 numbers
    {
    
        //The parameters that will be set in the equation

        if (array[i] > lar)
        
            lar=array[i];
        
        if (array[i] < smal)
        
          smal=array[i];
        
        
        
    }//Process output
     cout << "The largest integer is: " << lar << endl;
        cout << "The smallest integer is: " << smal << endl;
    return 0;
}

