/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 19, 2018, 8:52 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <ctime>
#include <fstream>
using namespace std;

/*
 * purpose : lottery counter
 */
int main(int argc, char** argv) {
//Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
   
    //Declare the variables here
    const int number=5;
    const int unum=5;
    int lot[number]={rand()%9+1, rand()%9+1, rand()%9+1, 
                     rand()%9+1, rand()%9+1} ;
    int user[unum];
    int count=0;//counts all the matching elements
    
    //Generating the users lottery numbers
    for (int show=0;show<unum;show++){
        cout << "Enter lottery number #" << show+1 << " : ";
        do{
        cin >> user[show];
        }while(user[show]>=10||user[show]<=0);
       }
   
    //Cout the numbers entered
    cout << "The five lottery numbers are : "; 
    for (int a=0;a<unum;a++)
     {
        cout << lot[a] << " ";
     }
    
    cout << endl;
    cout << "You entered: "; 
   
    for (int b=0;b<unum;b++)
     {
         cout << user[b] << " ";
     }
    
    //run the comparisons between the 2 [elements have to be equally matched]
if (lot[0]==user[0]){
    count++;
}   
if (lot[1]==user[1]){
    count++;
}    
if (lot[2]==user[2]){
    count++;
}    
if (lot[3]==user[3]){
    count++;
}    
if (lot[4]==user[4]){
    count++;
}    
    cout << endl;
    cout << "You matched " << count << " Element(s) " << endl;
    if (count==5)
    {
        cout << "Grand prize winner " << endl;
    }
    return 0;
}

