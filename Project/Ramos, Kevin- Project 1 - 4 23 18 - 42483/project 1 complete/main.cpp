/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Kevin Ramos
 * CSC 5
 * Dr. Mark Lehr
 * Created on April 14, 2018, 3:14 AM
 */

//System Libraries Here
#include <iostream> //I/O Library -> cout,endl
#include <iomanip>  //Format Library
#include <cstdlib>  //Rand/Srand
#include <ctime>    //Time
#include <fstream>  //File i/o
#include <cmath> // this is the inclusion for mathmatical purposes
#include <string>    //String library

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
   //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
     ifstream in;               //Input File
   ofstream out;              //Output File
    
    //Declare all Variables outside of the switch Here

    char choice; //This string is for pulling up the card value for the game 
                 //that will be played
    string name; //The name that will be entered by the user in the beginning
                 //of the program
    char again; //This character will prompt the user to restart the program if 
                //the user wishes
    int cardn; // the number of cards that will be placed in the rules of the 
               //game
    int mincrd = pow(1,1); //the minimum value of the card in the beginning 
                          //of the loop
    int maxcrd=2+3; // The maximum value of the card at the end of the loop
    
    int cardc;    // the game has six hard values, so this variable will be 
                   //used for incrementation and for the opposite
    bool t;   // if true, it will instruct the user to restart the program
    
    int cardr; // In case 1, the instructions will say that there are 6 
                //different card values, and this variable will be used to 
                //display it
    int cardrm=6; // maximum value for cardr variable which is 6
    
    const float add=1; //"Find any way to add to the project" - Dr Mark Lehr
    
//This is the start of the menu which prompts the program to make a choice
//whether to play the game or to view the value of the cards
   
    cout << "Type 1 to view the value of the cards " << endl;
    cout << "Type 2 to play the game " << endl;
    cout << "Type anything else to end the program " << endl;
       
    cin>> choice;
    
   //---------This is the end of the function for the beginning---------------//
    
    //After pressing the the choice in the menu, the program will initiate an
    //if else statement followed by a switch statement and a nested loop
      if(choice>='1'&&choice<='3')
          
          switch (choice)
                  
 //begins the switch statement
{
              case '1':
//begins the case 1              
              {
                  while (choice==1)
cout << "The value of the cards goes from least (bottom of the list) to the"
           <<"\nmost (top of the list) value (refer to Documentation for better" 
           <<"\nrepresentation)"<< endl;

cout<< fixed << showpoint;

//tower of card values
cout << "\n      Table Of Values:         "
     << "\n********************************" << setw(2) ;
    

//tower of value of cards
cout<< setw(2)     << "\n*    Super Star   Rank Value:6 *" 
        << setw(2) << "\n*      Mario      Rank Value:5 *" 
        << setw(2) << "\n*      Luigi      Rank Value:4 *" 
        << setw(2) << "\n*    Fire Flower  Rank Value:3 *"           
        << setw(2) << "\n* Super Mushroom  Rank Value:2 *"
         <<setw(2) << "\n*     Cloud       Rank Value:1 *" 
        << "\n********************************" << endl;
//this part of the values will tell the user how many cards the player will 
//receive when the user restarts the program and presses number 2
 
cout << "The player will receive " << endl;
for (int cardn=mincrd; cardn<=maxcrd; cardn++){// beginning of the nested loop 
    
    for (int mincrd=1;mincrd<=1; mincrd++){
      
        cout << endl;
    }
    cout << cardn <<endl;     
}//end of the nested loop

cout << "\nCards" << endl;

cardc++;//incrementing
cardc--;//decrementing

int cardrm = (cardr > mincrd) ? cardr : mincrd;
// boolian statement in order for the user to be prompted to restart
             // the program
bool t=true;
cout << "restart the program to play the game" << endl;
           
            break;
                
              }
//ends the first case
              
//begins the second case              
              case '2':     
              {
 //the next part prompts the user to get 5 random cards for the poker game

//welcome screen of the 2nd case           
cout << "*****************************************" << endl;
cout << "*                                       *" << endl;
cout << "*    WELCOME TO PICTURE POKER           *" << endl;
cout << "*                                       *" << endl;
cout << "*****************************************" << endl;
cout << "Enter the name of the user: ";
    cin >> name;
    
 do 
 {
  cout << "*****************************************" << endl;
 cout << "                 Hello " << name << "              " << endl;
 cout << "*****************************************" 
        << "\n--------------------------------------------"
        << "\n            Your Five Cards are " 
        << "\nCard Number      Rank Value        Picture "
        << "\n--------------------------------------------" << endl;

//Initialize variables inside case 2

   
float card=rand()%6+1,
    card1=rand()%6+1,
    card2=rand()%6+1, 
    card3=rand()%6+1, // variables used for card of the player 
    card4=rand()%6+1;
               
    //This part of my game project displays the values of the cards
    // while they are converted from number to pictures
    
//Function for the first card

cout << fixed << showpoint << setprecision(1);
cout << "\n" << "1" << setw(20) << static_cast<int>(card);
if (card==1)
    cout << "             Cloud " << endl;
    else if (card==2)
         cout << "             Super Mushroom " << endl;
    else if (card==3)
         cout << "             Fiery Plant " << endl;
    else if (card==4)
         cout << "             Luigi " << endl;
    else if (card==5)
         cout << "             Mario " << endl;
    else if (card==6)
         cout << "             Super Star " << endl;
        
//function for the second card

cout << fixed << showpoint << setprecision(1);
cout << "\n" << "2" << setw(20) << static_cast<int>(card1);
if (card1==1)
    cout << "             Cloud " << endl;
    else if (card1==2)
        cout << "             Super Mushroom " << endl;
    else if (card1==3)
        cout << "             Fiery Plant " << endl;
    else if (card1==4)
        cout << "             Luigi " << endl;
    else if (card1==5)
        cout << "             Mario " << endl;
    else if (card1==6)
        cout << "             Super Star " << endl;

//function for the third card

cout << fixed << showpoint << setprecision(1);
cout << "\n" << "3" << setw(20) << static_cast<int>(card2);
if (card2==1)
    cout << "             Cloud " << endl;
    else if (card2==2)
        cout << "             Super Mushroom " << endl;
    else if (card2==3)
        cout << "             Fiery Plant " << endl;
    else if (card2==4)
        cout << "             Luigi " << endl;
    else if (card2==5)
        cout << "             Mario " << endl;
    else if (card2==6)
         cout << "             Super Star " << endl;   
        
//function for the fourth card

cout << fixed << showpoint << setprecision(1);
cout << "\n" << "4" << setw(20) << static_cast<int>(card3);
if (card3==1)
    cout << "             Cloud " << endl;
    else if (card3==2)
        cout << "             Super Mushroom " << endl;
    else if (card3==3)
        cout << "             Fiery Plant " << endl;
    else if (card3==4)
        cout << "             Luigi " << endl;
    else if (card3==5)
        cout << "             Mario " << endl;
    else if (card3==6)
         cout << "             Super Star " << endl;

//function for the fifth card

cout << fixed << showpoint << setprecision(1);
cout << "\n" << "5" << setw(20) << static_cast<int>(card4);
if (card4==1)
    cout << "             Cloud " << endl;
    else if (card4==2)
        cout << "             Super Mushroom " << endl;
    else if (card4==3)
        cout << "             Fiery Plant " << endl;
    else if (card4==4)
        cout << "             Luigi " << endl;
    else if (card4==5)
        cout << "             Mario " << endl;
    else if (card4==6)
        cout << "             Super Star " << endl;
//ends the chart of combinations

cout <<"\nCongratulations " << name << endl;
    
//All possible combinations and outputs 
//If the player has more than 1 pair, then the program will respond by 
//outputting both pairs 

//If the deck has five clouds
if (card==1&&card1==1&&card2==1&&card3==1&&card4==1)
        
        cout << "You have a 5 of a Kind of Clouds " << endl;

// if the deck has 4 clouds
    else if (card==1&&card1==1&&card2==1&&card3==1||
        card1==1&&card2==1&&card3==1&&card4==1||
        card==1&&card2==1&&card3==1&&card4==1||
        card1==1&&card==1&&card3==1&&card4==1||
        card==1&&card1==1&&card2==1&&card4==1)
        
        cout << "You have a Four of a kind of Clouds " << endl;
 
 //if the deck has 3 clouds   
    else if  (card==1&&card1==1&&card2==1||card2==1&&card3==1&&card4==1||
        card==1&&card2==1&&card4==1||card==1&&card3==1&&card4==1||
        card==1&&card1==1&&card4==1||card3==1&&card1==1&&card4==1||
        card1==1&&card3==1&&card4==1||card==1&&card1==1&&card3==1||
        card1==1&&card2==1&&card3==1||card1==1&&card2==1&&card4==1)
        
        cout << "You have a 3 of a kind of clouds " << endl;
        

  //if the deck has 1 pair of clouds 
    else if (card==1&&card1==1||card==1&&card1==1||card==1&&card2==1
        ||card==1&&card3==1||card==1&&card4==1||card1==1&&card2==1||
        card1==1&&card3==1||card1==1&&card4==1||card2==1&&card3==1||
        card2==1&&card4==1||card3==1&&card4==1)

        cout << "You have a pair of Clouds " << endl;
            
//--------------end of cloud senario-----------------------------------------//

//If the deck has five Super Mushroom 
 if (card==2&&card1==2&&card2==2&&card3==2&&card4==2)
        
        cout << "You have a 5 of a Kind of Super Mushroom " << endl;
   
// if the deck has 4 Super Mushroom
    else if (card==2&&card1==2&&card2==2&&card3==2||
        card1==2&&card2==2&&card3==2&&card4==2||
        card==2&&card2==2&&card3==2&&card4==2||
        card1==2&&card==2&&card3==2&&card4==2||
        card==2&&card1==2&&card2==2&&card4==2)
        
        cout << "You have a Four of a kind of Super Mushroom " << endl;
         
//if the deck has 3 Super Mushroom 
    else if  (card==2&&card1==2&&card2==2||card2==2&&card3==2&&card4==2||
        card==2&&card2==2&&card4==2||card==2&&card3==2&&card4==2||
        card==2&&card1==2&&card4==2||card3==2&&card1==2&&card4==2||
        card1==2&&card3==2&&card4==2||card==2&&card1==2&&card3==2||
        card1==2&&card2==2&&card3==2||card1==2&&card2==2&&card4==2)

        cout << "You have a 3 of a kind of Super Mushroom " << endl;
        
//1 pair of super mushrooms
    else if (card==2&&card1==2||card==2&&card1==2||card==2&&card2==2||
        card==2&&card3==2||card==2&&card4==2||card1==2&&card2==2||
        card1==2&&card3==2||card1==2&&card4==2||card2==2&&card3==2||
        card2==2&&card4==2||card3==2&&card4==2)

        cout << "You have a pair of Super Mushroom" << endl;
  
//--------------end of Mushroom senario---------------------------------------//

//If the deck has five fiery plants
 if (card==3&&card1==3&&card2==3&&card3==3&&card4==3)
        
        cout << "You have a 5 of a Kind of Fiery plants " << endl;

// if the deck has 4 fiery plants
    else if (card==3&&card1==3&&card2==3&&card3==3||
        card1==3&&card2==3&&card3==3&&card4==3||
        card==3&&card2==3&&card3==3&&card4==3||
        card1==3&&card==3&&card3==3&&card4==3||
        card==3&&card1==3&&card2==3&&card4==3)
        
        cout << "You have a Four of a kind of Fiery plants " << endl;
 
 //if the deck has 3 Fiery plants 
    else if  (card==3&&card1==3&&card2==3||card2==3&&card3==3&&card4==3||
        card==3&&card2==3&&card4==3||card==3&&card3==3&&card4==3||
        card==3&&card1==3&&card4==3||card3==3&&card1==3&&card4==3||
        card1==3&&card3==3&&card4==3||card==3&&card1==3&&card3==3||
        card1==3&&card2==3&&card3==3||card1==3&&card2==3&&card4==3)

        cout << "You have a 3 of a kind of Fiery plants " << endl;
        
//1 pair of fiery plants
    else if (card==3&&card1==3||card==3&&card1==3||card==3&&card2==3||
        card==3&&card3==3||card==3&&card4==3||card1==3&&card2==3||
        card1==3&&card3==3||card1==3&&card4==3||card2==3&&card3==3||
              card2==3&&card4==3||card3==3&&card4==3)

        cout << "You have a pair of Fiery Plants " << endl;

//--------------------end of Plant senario------------------------------------//   
    
//If the deck has five Luigi
if (card==4&&card1==4&&card2==4&&card3==4&&card4==4)
        
        cout << "You have a 5 of a Kind of Luigi " << endl;
    
// if the deck has 4 Luigi
    else if (card==4&&card1==4&&card2==4&&card3==4||
        card1==4&&card2==4&&card3==4&&card4==4||
        card==4&&card2==4&&card3==4&&card4==4||
        card1==4&&card==4&&card3==4&&card4==4||
        card==4&&card1==4&&card2==4&&card4==4)
        
        cout << "You have a Four of a kind of Luigi " << endl;
 
//if the deck has 3 Luigi
    else if  (card==4&&card1==4&&card2==4||card2==4&&card3==4&&card4==4||
        card==4&&card2==4&&card4==4||card==4&&card3==4&&card4==4||
        card==4&&card1==4&&card4==4||card3==4&&card1==4&&card4==4||
        card1==4&&card3==4&&card4==4||card==4&&card1==4&&card3==4||
        card1==4&&card2==4&&card3==4||card1==4&&card2==4&&card4==4)

        cout << "You have a 3 of a kind of Luigi " << endl;
        
//1 pair of Luigis
    else if (card==4&&card1==4||card==4&&card1==4||card==4&&card2==4||
            card==4&&card3==4||card==4&&card4==4||card1==4&&card2==4||
            card1==4&&card3==4||card1==4&&card4==4||card2==4&&card3==4||
            card2==4&&card4==4||card3==4&&card4==4)

        cout << "You have a pair of Luigi " << endl;

//--------------end of Luigi senario-----------------------------------------//

//If the deck has five Mario 
if (card==5&&card1==5&&card2==5&&card3==5&&card4==5)
        
        cout << "You have a 5 of a Kind of Mario  " << endl;

// if the deck has 4 Mario 
    else if (card==5&&card1==5&&card2==5&&card3==5||
        card1==5&&card2==5&&card3==5&&card4==5||
        card==5&&card2==5&&card3==5&&card4==5||
        card1==5&&card==5&&card3==5&&card4==5||
        card==5&&card1==5&&card2==5&&card4==5)
        
        
        cout << "You have a Four of a kind of Mario  " << endl;

//if the deck has 3 Mario 
    else if  (card==5&&card1==5&&card2==5||card2==5&&card3==5&&card4==5||
        card==5&&card2==5&&card4==5||card==5&&card3==5&&card4==5||
        card==5&&card1==5&&card4==5||card3==5&&card1==5&&card4==5||
        card1==5&&card3==5&&card4==5||card==5&&card1==5&&card3==5||
        card1==5&&card2==5&&card3==5||card1==4&&card2==5&card4==5)

        cout << "You have a 3 of a kind of Mario  " << endl;
        
//1 pair of Marios
    else if (card==5&&card1==5||card==5&&card1==5||card==5&&card2==5||
        card==5&&card3==5||card==5&&card4==5||card1==5&&card2==5||
        card1==5&&card3==5||card1==5&&card4==5||card2==5&&card3==5||
            card2==5&&card4==5||card3==5&&card4==5)

        cout << "You have a pair of Mario " << endl;
        
//--------------end of Mario senario-----------------------------------------//

//If the deck has five Super Star
if (card==6&&card1==6&&card2==6&&card3==6&&card4==6)
        
        cout << "You have a 5 of a Kind of Super Star " << endl;

// if the deck has 4 Super Star
    else if (card==6&&card1==6&&card2==6&&card3==6||
        card1==6&&card2==6&&card3==6&&card4==6||
        card==6&&card2==6&&card3==6&&card4==6||
        card1==6&&card==6&&card3==6&&card4==6||
        card==6&&card1==6&&card2==6&&card4==6)
        
        cout << "You have a Four of a kind of Super Star " << endl;
 
//if the deck has 3 Super Star
    else if  (card==6&&card1==6&&card2==6||card2==6&&card3==6&&card4==6||
        card==6&&card2==6&&card4==6||card==6&&card3==6&&card4==6||
        card==6&&card1==6&&card4==6||card3==6&&card1==6&&card4==6||
        card1==6&&card3==6&&card4==6||card==6&&card1==6&&card3==6||
        card1==6&&card2==6&&card3==6||card1==6&&card2==6&&card4==6)

        cout << "You have a 3 of a kind of Super Star  " << endl;

//1 Pair of Super Star
    else if (card==6&&card1==6||card==6&&card1==6||card==6&&card2==6||
        card==6&&card3==6||card==6&&card4==6||card1==6&&card2==6||
        card1==6&&card3==6||card1==6&&card4==6||card2==6&&card3==6
        ||card2==6&&card4==6||card3==6&&card4==6)

        cout << "You have a pair of Super Star " << endl;
        
//--------------end of Star senario-----------------------------------------//

//Beginning of senario if the person has no pairs of cards
if (card!=card1&&card!=card2&&card!=card3&&card!=card4&&card1!=card2&&
        card1!=card3&&card1!=card4&&card2!=card3&&card2!=card4&&card3!=card4)
           
            cout << "You have Junk " << endl;

//------------------end of junk senario-------------------------------------//

//After all the cards are read, the program will prompt the user if he wants
//to restart the program, thus starting it again from the 2nd case

cout << "Do you want to try again " << name << "? (Y/N): ";
cin >> again;
} while (again=='y'||again=='Y');

if (again!='y')
    
    cout << "\nThank you " << name << " For your participation";
                break;
        }
        //ends the 2nd case 
              
//begins the default case
              default:
              {
                  cout << "Exiting program " << endl;
              }
//End of the default case

}//end of the first if statement
          
  //else part of the beginning if else statement
      else
          cout << "Exiting program ";
 
//Close Files and Exit stage 
    in.close();
    out.close();
    //Exit
    return 0;
}

