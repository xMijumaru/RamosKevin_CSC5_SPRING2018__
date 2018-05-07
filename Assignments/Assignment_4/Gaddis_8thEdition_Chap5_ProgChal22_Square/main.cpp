/* 
 * File:   main.cpp
 * Author:
 * Created on 
 * Purpose: 
 */

//System Libraries Here
#include <iostream>
using namespace std;

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int number;//number to be inputed
    char again;
   //Output Located Here
    do
    {
        cout<<"Enter the number of rows and lines you want to be displayed: ";
     cout<<"\n (Only numbers between 1 and 15 will be valid)"<<endl;
    cin>>number;
     
     if (number<0||number>15)
         cout<<"Invalid character chosen";
     else
     {
         for (int rowx=0;rowx<number;rowx++)
    {
        for (int ast=0;ast<number;ast++)
        {
            cout<<'X';
        if (ast==15)
            break;
        }
        cout<<endl;
    }
    cout<<"Do you want to try another calculation(Y/N): ";
    cin>>again;
     }
    }while (again=='y'||again=='Y');
    //Exit
    return 0;
}

