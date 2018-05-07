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

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!

    float share(int snum, int sdvalue, int nume, int deno);//function
int main()
{
   //declare variables
   int snum,              //number of stock shares owned
        sdvalue,        //current value of the stocks in whole dollars
        nume,         //numerator of the fraction
        deno;        //denomonater of the fraction
    float total;    //answer to the equation
    char again;    //loop
do
{
        
    cout<<"Enter the value of the stock price in whole dollars: ";
    cin>>sdvalue;
    cout<<"Enter the number of stocks you own: ";
    cin>>snum;
    cout<<"Enter the numerator of numerator of the fraction that is rounded off: ";
    cin>>nume;
    cout<<"Enter the denominator of the fraction: ";
    cin>>deno;
   
    total= share (snum, sdvalue, nume, deno);
        cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The total value of the stock is: "<<total<<endl;
    cout<<"Do you want to try another calculation(Y/N): ";
    cin>>again;
}while(again=='Y'||again=='y');
cout<<"Goodbye";

    return 0;
}
float share(int snum_par, int sdvalue_par, int nume_par, int deno_par)
{ float stockt, fraction;
    fraction=(static_cast<float>(nume_par)/static_cast<float>(deno_par));
    stockt=(sdvalue_par+fraction)*snum_par;
return(stockt);
}
    