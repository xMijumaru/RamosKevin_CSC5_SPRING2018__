/* 
 * File:   main.cpp
 * Author: Kevin Ramos
 * Created on March 20, 2016, 10:07 AM
 * Purpose:  Prime number
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
#include <ctime>//random number seed
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
   
    //Declare all Variables Here
    char test; //2-100
    bool prime;//determine if the test is prime
   
    //Input or initialize values Here
    test=rand()%99+2;//[2,100]
  
    //Process map inputs to outputs
    prime=test==2?true:test%2;
    prime=test==3?true:prime&&test%3;
    prime=test==5?true:prime&&test%5;
    prime=test==7?true:prime&&test%7;
    //Output Located Here
    cout<<static_cast<int>(test)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;
    
     //Input or initialize values Here
    test=rand()%99+2;//[2,100]
    
    //Process map inputs to outputs
    prime=test==2?true:test%2;
    prime=test==3?true:prime&&test%3;
    prime=test==5?true:prime&&test%5;
    prime=test==7?true:prime&&test%7;
    //Output Located Here
    cout<<static_cast<int>(test)
            <<" is "
            <<(prime?"Prime":"Not Prime")
            <<endl;

    //Exit
    return 0;
}
