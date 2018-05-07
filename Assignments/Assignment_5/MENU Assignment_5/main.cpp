/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 6, 2018, 6:35 PM
 */

#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <iomanip>
using namespace std;

//function calls
float KineticEnergy (float,float);//Kinetic Energy function in program 1
float area (float, float);//calls the area function for program 2
float fallingdistance (float);//calls the falling distance for program 3
float conversion (float, float);//calls the conversion for program 4
float futureValue (float, float, float);//future value function for program 5
float population (float, float, float, float);//population function for program
//6
bool isprime (int);//function for program 7
//beginning of program 8
unsigned char cnvDay(string);
unsigned char cnvMnth(string);
bool isLpYr(unsigned short);
char  gtCntVl(unsigned int);
char  gtYrVal(unsigned int);
char  gtMnVal(char,unsigned int);
string dyOfWk(char, char, unsigned int);
//end of program 8
//beginning of program 9 function
float frand();//Probability from 0 to 1
bool shoot(float);
void shoot(bool, float, bool &,bool &);
//end of program 9


int main(int argc, char** argv) {
    //Declare the variables here
    int choice;
    
    cout << "Assignment 5 menu" << endl;
    cout << "Press 1 to begin the kinetic energy program" << endl;
    cout << "Press 2 to begin the area program" <<endl;
    cout << "Press 3 for falling distance program"<< endl;
    cout << "Press 4 for temperature conversion table " <<endl;
    cout << "Press 5 for future value program " <<endl;
    cout << "Press 6 for population program " << endl;
    cout << "Press 7 for prime number program" << endl;
    cout << "Press 8 for the day of the week program" << endl;
    cout << "Press 9 for shooter game program " << endl;
    cin >> choice;
    
    if (choice ==1) //begins the kinetic energy program
    {
      float mass,     //Mass of the vehicle in kilograms
            sum,    //Total amount of kinetic energy exerted by the object
            vel;        //Velocity of the vehicle
    
    cout << "This program calculates the amount of Kinetic Energy exerted by an"
         << "\nobject" << endl;
    cout << "\nEnter the mass of the object in Kilograms: ";
    cin >> mass;
    cout << "\nEnter the constant velocity of the object in Meters per Second: ";
    cin >> vel;
    
    sum=KineticEnergy(mass, vel);//The function will return the answer 
    
    cout << fixed << showpoint << setprecision(2) << endl;
    cout << "The kinetic energy for the object is " << sum << " Joules " << endl;
    }
   
               
    else if (choice ==2)///begins the area program
    {
        
    float length, width, sum;
    
    cout << "Area of a rectangle program " <<endl;
    cout << "Enter the length of the rectangle " <<endl;
    cin>>length;
    cout << "Enter the width of the triangle " << endl;
    cin >> width;
    sum= area (length, width);
    cout << "The area of the rectangle is " << sum << endl;
        
    }
    else if (choice ==3)///begins the falling distance program           
     {
         
    //Declare variables here
    float time,
           sum;
            
    cout << "This program calculates the amount the distance an object falls";
    cout << "\nin a specific time period" << endl;
    cout << "Enter the amount of time the item was falling (in seconds): " 
            << endl;
    cin >> time;
    sum = fallingdistance(time);
    cout << "The falling distance of the object is " 
         <<sum << " Meters" << endl;
         
     }
    else if (choice==4)//begins temperature table
    {
        
        //Declare the variables here
    float total;
    float value1;
    cout << "Fahrenheit to Celsius conversion table" << endl;
    cout << "from 1 - 20 degrees " << endl;
        
 conversion (0, 20);
        
    }
    else if (choice ==5)//begins future value program
    {
        
        float month,//number of months that the interest will happen
        pres,//present value of the account
        inter,//interest rate
        conv,//converts the percent
        sum;//total future value

    cout << "This program calculates the future value after compound interest"
            <<endl;
    cout << "Enter the present monetary value of your account " << endl;
    cin>> pres;
    cout << "Enter the monthly interest of the account (in percent) " << endl;
    cin>>inter;
    cout << "Enter the amount of month(s) that compound interest that will be"
            <<"\nincurred for " <<endl;
    cin>>month;
    conv=inter*1e-2;//converts the interest rate to a decimal percentage
    sum=futureValue (pres, conv, month);
    cout << fixed << showpoint << setprecision(2);
    cout << "The future value of the account is $" << sum << endl;
    }
    else if (choice ==6)
    {
        
        //declare variables here
    float p,      //current population size
            year,//years to calculate ahead
            birth,//annual birth rate
            birthp,//birthrate percentage
            death,//annual death rate
    deathp;//death rate percentages
    float sum;//answer to all the data
    
    cout << "Population program" <<endl;
    cout << "What is the current population" << endl;
    cin>>p;
    cout << "How many years do you want to calculate" <<endl;
    cin >>year;
    cout << "What is the birth rate in percentages" <<endl;
    cin>>birth;
    cout<<"What is the death rate in percentages" << endl;
    cin >> death;
    
       
    //output
   sum=  population (p,year, birth, death);
   cout << "In " << year << " year(s), the population will be " <<endl;
   cout << "approximately " << static_cast<int>(sum) << " inhabitants" <<endl;
    
        
    }
    else if (choice ==7)
    {
        
        //Declare the variables here
    int num;//number that will be inputed by the person
    bool solu; //solution to the problem
    //display output
    cout << "This program articulates whether the number inputed is prime or not";
    cout << "\nEnter the number you want to check: " <<endl;
    cin >>num;
    solu=isprime(num);
    if (solu==true)
        cout << "The number is Prime" << endl;
    else if (solu==false)
        cout << "The number is not Prime" <<endl;
        
    }
        
    else if (choice ==8 )
    {
        
         //Declare Variables
    string sMonth,sDay;
    unsigned short year;//2 Byte Integer Value
    unsigned char day, month;//1 Byte Integer Value
 
    //Initial Variables
    cout<<"This program outputs the day of the week "<<endl;
    cout<<"given the date"<<endl;
    cout<<"Input the date i.e. July 4, 2008"<<endl;
    cin>>sMonth>>sDay>>year;
 
    //Map/Process Inputs to Outputs
    day=cnvDay(sDay);
    month=cnvMnth(sMonth);
    cout << year <<" Is leap year? -> " <<(isLpYr(year)?"True":"False")<<endl;
    cout << "Century Value = "<<static_cast<int>(gtCntVl(year))<<endl;
    cout << "Year value = "<<static_cast<int>(gtYrVal(year))<< endl;
    cout << "Month Value = "<<static_cast<int>(gtMnVal(month, year)) << endl;
    
    //Output the results
    cout<<"The date is "
            <<static_cast<int>(month)<<"/"
            <<static_cast<int>(day)<<"/"<<year<<endl;
    cout<<"The day of the week = "
            <<dyOfWk(month,day,year)<<endl;
 
        
    }
    else if (choice == 9)
    {
        //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    bool aLive,bLive,cLive;
    char remain;
    float aPk,bPk,cPk;
    int aCnt,bCnt,cCnt,nGames;

    //Initial Variables
    aCnt=bCnt=cCnt=0;
    aPk=1.0f/3.0f;
    bPk=1.0f/2.0f;
    cPk=1.0f;
    nGames=1000;
    
    for(int game=1;game<=nGames;game++){
        //Initialize Life
        aLive=bLive=cLive=true;
        
        //Map/Process Inputs to Outputs
        do{
            shoot(aLive,aPk,cLive,bLive);
            shoot(bLive,bPk,cLive,aLive);
            shoot(cLive,cPk,bLive,aLive);
            remain=aLive+bLive+cLive;
        }while(remain>1);
        
        aCnt+=aLive;
        bCnt+=bLive;
        cCnt+=cLive;
    }
    
    //Output the results
    cout<<"Aaron   Pk = "<<aPk<<endl;
    cout<<"Bob     Pk = "<<bPk<<endl;
    cout<<"Charlie Pk = "<<cPk<<endl;
    cout<<"Out of "<<nGames<<" games"<<endl;
    cout<<"Aaron   Lives "<<aCnt<<" times"<<endl;
    cout<<"Bob     Lives "<<bCnt<<" times"<<endl;
    cout<<"Charlie Lives "<<cCnt<<" times"<<endl;
    cout<<"Game Check = "<<aCnt+bCnt+cCnt<<" games"<<endl;
    
        
   
    }
    return 0;
}

float KineticEnergy (float mass,float vel)//inside kinetic energy
{
    
    return (mass*vel)*(mass*vel) * (0.5);//function that returns answer

}


float area (float length, float width)
{
    
    return (length * width);
    
}
float fallingdistance (float time )//calls the falling distance for program
{
     return (time*9.8) * (time * 9.8) * 0.5;
    
}
float conversion (float start, float end)//temperature
{
    for (float beg=start; beg<=end; beg++)
    {
        cout << fixed << showpoint << setprecision(1);
        cout << setw(2) << static_cast<int>(beg) 
             << setw(15) 
             << (beg-32) * 5/9  << endl;
    }
}
float futureValue (float pres, float conv, float month)//function for future 
//value
{
    
    return pres * pow(1+conv, month);
    
}
float population (float p, float year, float birth, float death)//program 6
{
     //Equations processed
    float deathp=death*1e-2;
    float birthp=birth*1e-2;

    float sum;
    sum=(p + (birthp * p) - (deathp * p));
    return sum;
    
}
bool isprime (int num) //function 7 program
{
    
    for (int A=2; A<=sqrt(num); A++)
    {
        
        if (num % A == 0)
            return false;
        
        else return true;
    }
}
    //beginning of program 8 functions
string dyOfWk(char month, char day, unsigned int year){
    int weekDay=(day+gtMnVal(month,year)+gtYrVal(year)+gtCntVl(year));
    weekDay%=7;
    switch(weekDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
    }
    return "Saturday";
}

char  gtMnVal(char month,unsigned int year){
    switch(month){
        case 1:{
            if(isLpYr(year))return 6;
            return 0;
        }
        case 2:{
            if(isLpYr(year))return 2;
            return 3;
        }
        case 3:case 11:{return 3;}
        case 4:case 7:{return 6;}
        case 5:{return 1;}
        case 6:{return 4;}
        case 8:{return 2;}
        case 9:case 12:{return 5;}
        case 10:{return 0;}
    }
}

char  gtYrVal(unsigned int year){
    return year%100+(year%100)/4;
}

char  gtCntVl(unsigned int century){
    century/=100;
    return 2*(3-century%4);
}

bool isLpYr(unsigned short year){
    return ((year%400==0)||((year%4==0)&&(!(year%100==0))));
}

unsigned char cnvMnth(string sMonth){
    if(sMonth=="January")  return 1;
    if(sMonth=="February") return 2;
    if(sMonth=="March")    return 3;
    if(sMonth=="April")    return 4;
    if(sMonth=="May")      return 5;
    if(sMonth=="June")     return 6;
    if(sMonth=="July")     return 7;
    if(sMonth=="August")   return 8;
    if(sMonth=="September")return 9;
    if(sMonth=="October")  return 10;
    if(sMonth=="November") return 11;
    return 12;
}

unsigned char cnvDay(string sDay){
    char day=sDay[0]-48;
    if(sDay[1]==',')return day;
    day*=10;
    day+=sDay[1]-48;
    return day;
}
// end of program 8 functions

//beginning of program 9 functions
void shoot(bool aLive, float aPk, bool &cLive,bool &bLive){
    if(aLive){
          if(cLive)      cLive=shoot(aPk);
          else if(bLive) bLive=shoot(aPk);
    }
}

bool shoot(float pk){
    if(frand()>pk)return true;
    return false;
}

float frand(){
    static float MAXRAND=pow(2,31)-1;
    return rand()/MAXRAND;
}
//end