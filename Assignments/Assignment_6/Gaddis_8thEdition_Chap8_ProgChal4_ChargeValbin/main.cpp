/* 
 * File:   main.cpp
 * Author: Kevin Ramos
 * Created on May 24, 2016, 9:07 AM
 * Purpose: Account Validation
 */

//System Libraries Here
#include <iostream>
#include <cstdlib>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool binary(int[], int, int);

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    const int acc=18;
    int array[acc]={5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
                     8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
                    1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
    int num=18;     //Number of accounts on the system
    int enter;//Account number that will be inputed by the user
    bool result; //Boolian which will display the results
    
    //Input or initialize values Here
    cout << "Enter your Seven digit account number for validation: "; 
    cin >> enter;
    result=binary(array,18, enter);
    
    
    if (result==false){
        cout << "Account " << enter << " is invalid " << endl;
    }
    else if (result==true)
        cout << "Account " << enter << " has been verified" << endl;
    //Process/Calculations Here
    
    //Output Located Here
  

    //Exit
    return 0;
}
bool binary (int array[], int acc, int enter)
{
     int first=0;
    int last=acc-1, mid;
    int position;
    bool found=false;
    
    while (!found && first <= last)
    {
   mid=(first+last)/2;
   if (array[mid]==enter){
       position==mid;
       return true;
       found==true;
   }
   else if (array[mid]>enter){
       last=mid-1;
   }
   else first = mid+1;
    } 
       
 
   return false;
}


