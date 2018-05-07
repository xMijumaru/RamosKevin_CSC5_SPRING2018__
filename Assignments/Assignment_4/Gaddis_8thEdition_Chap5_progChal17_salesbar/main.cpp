/* 
 * File:   main.cpp
 * Author:
 * Created on February 13, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>
using namespace std;//namespace I/O stream library created

int main(int argc, char** argv) {
 
       
   //Declare Variables
    int     sale1,
            sale2,
            sale3,
            sale4,
            sale5;
    char again;//loop
        
    //Initial Variables
   
    //Map/Process Inputs to Outputs
 
    //Display Outputs
    do{
    cout<<"This program compares the sales figures for the five stores"
            <<"\nEnter in quantities of whole numbers only"<<endl;
   
    cout<<"Enter the sales figures for the store #1: ";
    cin>>sale1;
    {
    if (sale1>=0)
    cout<<"Enter the sales figures for the store #2: ";
    else 
        cout<<"Invalid option chosen";
    }
    cin>>sale2;
    {
    if (sale2>=0)
    cout<<"Enter the sales figures for the store #3: ";
    else 
        cout<<"Invalid option chosen";
    }
    cin>>sale3;
    {
    if (sale3>=0)
    cout<<"Enter the sales figures for the store #4: ";
    else 
        cout<<"Invalid option chosen";
    }
    cin>>sale4;
    {
    if (sale4>=0)
    cout<<"Enter the sales figures for the store #5: ";
    else 
        cout<<"Invalid option chosen";
    }
    cin>>sale5;
   cout<<fixed<<setprecision(2)<<showpoint;
    cout<<" Day               Total"<<endl;
 
  
  
 float n = sale1 / 100;
    cout << "Store 1:          ";
for (int row = 0; row < n; row++)   //store 1
    {
    cout<<'*';
    }
    
float n2 = sale2 / 100;
cout << "\nStore 2:          ";
for (int row = 0; row < n2; row++)  //store 2
{
    cout<<'*';
}

float n3 = sale3 / 100;
cout << "\nStore 3:          ";
for (int row = 0; row < n3; row++)  //store 3
{
    cout<<'*';
}

float n4 = sale4 / 100;
cout << "\nStore 4:          ";
for (int row = 0; row < n4; row++)  //store 4
{
    cout<<'*';
}

float n5 = sale5 / 100;
cout << "\nStore 5:          ";
for (int row = 0; row < n5; row++)  //store 5
{
    cout<<'*';
}

cout<<"\nDo you want to run this program again(Y/N)?";
cin>>again;
 }while(again=='y'||again=='Y');
   
     //Exit program!
    return 0;
}
