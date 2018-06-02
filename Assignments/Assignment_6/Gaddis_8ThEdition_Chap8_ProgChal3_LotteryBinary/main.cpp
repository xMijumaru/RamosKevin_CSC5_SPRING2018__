/* 
 * File:   main.cpp
 * Author: Kevin Ramos
 * Created on May 24, 2018 10:55 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <vector>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
float bin(int [], int, int);

//Program Execution Begins Here

int main(int argc, char** argv) {
    
    //Declare all Variables Here
    int lottery;//The weeks winning numbers that the user will input
    int size=10;// Size that will be passed on during the search
    const int num=10;//The 10 numbers that are inputted
    int array[num]={13579, 26791, 26792, 33445, 55555,
        62483, 77777, 79422, 85647, 93121};//the numbers to compare to
   bool results;
   
    //Input or initialize values Here
    cout << "Enter the five winning lottery numbers (exclude spaces): ";
    cin>>lottery;
    results=bin(array, 10, lottery);
    
    
    if (results==true) 
    {
        cout << "You won the lottery " << endl;
    }
    if(results==false){
        cout << "You did not win the lottery " << endl;
    }
 
    
    //Process/Calculations Here
    
    //Output Located Here


    //Exit
    return 0;
}
float bin(int array[], int size, int lottery){
    int low=0;
    int high=size-1, mid;
    
    while (low<=high)
    {
   mid=(high+low)/2;
   if (lottery==array[mid]){
       return true;
   }
   else if (lottery>array[mid]){
       low=mid+1;
   }
   else high = mid-1;
    } 
       
 
   return false;
 }
