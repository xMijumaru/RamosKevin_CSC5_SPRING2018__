/* 
 * File:   main.cpp
 * Author:
 * Created on February 13, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
float shipping(int spool, int stock);
void input(int);
int main()
{
   //declare variables
  int spool=0;
    
    //output
    cout<<"Status of an order of spools"<<endl;
    cout<<"Enter the number of spools you ordered: "<<endl;
    cin>>spool;
    input(spool);
     return 0;
}
float shipping(int spool, int stock)
{
    float totalC=0;
    
   return totalC=spool*100+10;
    
}
void input(int spool)
{
    if (spool<1)
    {
    cout<<"Enter value greater than 1"<<endl;
    cin>>spool;
    input(spool);
    }
    else{
        int stock=0;
        cout<<"How many spools are in stock: "<<endl;
        cin>>stock;
        if (spool>stock){
            cout<<"not enough in stock"<<endl;
        }
        else{
          cout<<" The total cost is : "<<shipping(spool, stock)<<endl;
        }
    }

}

