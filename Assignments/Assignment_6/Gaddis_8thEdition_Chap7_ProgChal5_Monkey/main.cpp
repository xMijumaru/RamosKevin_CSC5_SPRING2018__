/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 17, 2018, 3:43 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

/*
 * purpose : To show the average of 4 monkeys
 */
//Global constants 


//Function Prototypes



int main(int argc, char** argv) {
    //Declare my variables here
    float totfood; //total amount of food the monkeys have ate
    const int  day=5;
    const int monkey=3;
    int array[monkey][day];//return array
    //Declare my 2nd set of variables
    int mo, le;
    
    //Display the outputs
   for (int x=0; x<monkey; x++){
        for (int y=0; y<day; y++){
            cout << "Monkey " << x+1 << " Day " << y+1 << " : ";
            cin >> array [x][y];
            totfood+=array[x][y];
        }
        cout << endl;
    }
    mo=le=array[0][0];
    
    for (int a=0; a<monkey; a++){//calculates the maximum
            //Set the parameters for the equation
        for (int b=0;b<day;b++){
            if (array[a][b] < le)
        { 
	le = array[a][b];
        }
    if (array[a][b] > mo)
	{ 
	mo = array[a][b];
        }
                
        }
        
        
    }
   
   
 
    //Process outputs
    cout << fixed << showpoint << setprecision(1);
    cout << "The average amount of food eaten by these monkeys are: " <<
            totfood/3 <<endl;
    cout << "The maximum amount eaten was: " << mo <<endl;
    cout << "The minimum amount eaten was: " << le << endl;
    
     return 0;
}



