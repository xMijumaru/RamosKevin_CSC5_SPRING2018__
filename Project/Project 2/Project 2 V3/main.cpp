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
bool player(int);//This boolian will take in the number of players that will be
                //playing the game, by returning a true or false value
void cardread(int []);//This function will read the values of each card, 
                        //and display an output in response to said card
int value(int []);    //In the 2nd player game, this option will evaluate the 
                      //cards, and display the value 
//Program Execution Begins Here
int main(int argc, char** argv) {
   //set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    ifstream in;               //Input File
    ofstream out;              //Output File
    
    //Declare all Variables outside of the switch Here
//Variables in the option 1-------------------------------------------------
    
    int cardc;    // the game has six hard values, so this variable will be 
                   //used for incrementation and for the opposite
    const int cardta=5;//The card table in the first option will display this
    
    const int rulep=2;//This game will have about 2 players in the 2 dimensional
                      //array
    int deck[cardta]={1,2,3,4,5};   //The hand of the card in the array
    
    int deck2[rulep][cardta]={{1,2,3,4,5},{1,2,3,4,5}};//the value of the 2 table
    
    int cardr; // In case 1, the instructions will say that there are 6 
                //different card values, and this variable will be used to 
                //display it
    int cardrm=6; // maximum value for cardr variable which is 6
    
//end of option 1-------------------------------------------------------------
    //Option 2 (some will be in the do while statement
   char choice; //This string is for pulling up the card value for the game 
                 //that will be played
    string name; //The name that will be entered by the user in the beginning
                 //of the program
    char again; //This character will prompt the user to restart the program if 
                //the user wishes
    int numpl;  //The user will input the number of players that will participate
                //in the game 
    bool onetwo;//if the function returns false, then there is only one player
                //however, if the function returns true, then there are two players
                 // and this program will execute the choice
    static string name1;//when the game initiates 2 players, this will be player ones 
                 //name
    static string name2; //when the game initiates 2 players, this will be the second
                //players name
    char another;//If the person wants to play again for the 2 player option
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
          
          switch (choice){
              case '1':{
                  while (choice==1)
                      
  cout << "The value of the cards goes from least (bottom of the list) to the"
           <<"\nmost (top of the list) value (refer to Documentation for better" 
           <<"\nrepresentation)"<< endl;

             cout<< fixed << showpoint;

//tower of card values
    cout << "\n      Table Of Values:         "
         << "\n********************************" << setw(2) ;


    //tower of value of cards
    cout << setw(2)     << "\n*    Super Star   Rank Value:6 *" 
            << setw(2) << "\n*      Mario      Rank Value:5 *" 
            << setw(2) << "\n*      Luigi      Rank Value:4 *" 
            << setw(2) << "\n*    Fire Flower  Rank Value:3 *"           
            << setw(2) << "\n* Super Mushroom  Rank Value:2 *"
             <<setw(2) << "\n*     Cloud       Rank Value:1 *" 
            << "\n********************************" << endl;
                  
        cout << "The player will receive " << endl;
                for (int x=0;x<5;x++){
                    cout << deck[x] << " ";
                }//end of the nested loop
        cout << "Cards" << endl;
 
cout << "In a two player game, Each player will receive " << endl;

cardc++;//incrementing
cardc--;//decrementing

// boolian statement in order for the user to be prompted to restart
             // the program

cout << "restart the program to play the game" << endl;
           
            break;
              }
//ends the first case
              
//begins the second case              
              case '2':{
 //the next part prompts the user to get 5 random cards for the poker game

//welcome screen of the 2nd case           
    cout << "*****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*    WELCOME TO PICTURE POKER           *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;

    cout << "How many players will be participating " <<endl;
    cout << "(Press 1 for one player, or press 2 for two players): ";
    
        do{
        cin >>numpl; 
        }while (numpl!=1&&numpl!=2);
            onetwo=player(numpl);
       if (onetwo==true){
         
          
           cout << "Enter the name for player 1: ";
                cin>>name1;
           cout << "Enter the name for player 2: ";
                cin>>name2;
     do{
          //Declare sensitive variables here
    const int hand=5;
    int array [hand]={rand()%6+1,rand()%6+1,rand()%6+1,
               rand()%6+1,rand()%6+1};
    int array2 [hand]={rand()%6+1,rand()%6+1,rand()%6+1,
               rand()%6+1,rand()%6+1,};
    int result; //The result that player 1 will have
    int result2; //Player 2 result
    
           cout << name1 << " cards are :" << endl;
            cardread(array);
           cout << name2 << " cards are :" << endl;
           cardread (array2);
           result= value(array);
           result2=value(array2);
           cout << endl;
         
   if (result>result2)
       cout << name1 <<  " wins " << endl;
   else if (result2>result)
       cout << name2 << " wins " << endl;
   else
       cout << "The game is tie " << endl;
   cout << "Try again?(Y/N)" << endl;
        cin >> another;
           }while (another=='y'||another=='Y');
   }    
       else if (onetwo==false){

    cout << "\nEnter the name of the user: ";
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
       }//This is for the if boolian==false
            
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

bool player(int numpl){
    if (numpl==1){
        return false;
    }
    else if (numpl==2){
        return true;
    }
    else
        return 0;
}
void cardread(int array[]){
     cout << fixed << showpoint << setprecision(1);
        
        if (array[0]==1)
            cout << "             Cloud " << endl;
            else if (array[0]==2)
                 cout << "             Super Mushroom " << endl;
            else if (array[0]==3)
                 cout << "             Fiery Plant " << endl;
            else if (array[0]==4)
                 cout << "             Luigi " << endl;
            else if (array[0]==5)
                 cout << "             Mario " << endl;
            else if (array[0]==6)
                 cout << "             Super Star " << endl;

        //function for the second card

        cout << fixed << showpoint << setprecision(1);
        
        if (array[1]==1)
            cout << "             Cloud " << endl;
            else if (array[1]==2)
                cout << "             Super Mushroom " << endl;
            else if (array[1]==3)
                cout << "             Fiery Plant " << endl;
            else if (array[1]==4)
                cout << "             Luigi " << endl;
            else if (array[1]==5)
                cout << "             Mario " << endl;
            else if (array[1]==6)
                cout << "             Super Star " << endl;

        //function for the third card

        cout << fixed << showpoint << setprecision(1);
   
        if (array[2]==1)
            cout << "             Cloud " << endl;
            else if (array[2]==2)
                cout << "             Super Mushroom " << endl;
            else if (array[2]==3)
                cout << "             Fiery Plant " << endl;
            else if (array[2]==4)
                cout << "             Luigi " << endl;
            else if (array[2]==5)
                cout << "             Mario " << endl;
            else if (array[2]==6)
                 cout << "             Super Star " << endl;   

        //function for the fourth card

        cout << fixed << showpoint << setprecision(1);
     
        if (array[3]==1)
            cout << "             Cloud " << endl;
            else if (array[3]==2)
                cout << "             Super Mushroom " << endl;
            else if (array[3]==3)
                cout << "             Fiery Plant " << endl;
            else if (array[3]==4)
                cout << "             Luigi " << endl;
            else if (array[3]==5)
                cout << "             Mario " << endl;
            else if (array[3]==6)
                 cout << "             Super Star " << endl;

        //function for the fifth card

        cout << fixed << showpoint << setprecision(1);
     
        if (array[4]==1)
            cout << "             Cloud " << endl;
            else if (array[4]==2)
                cout << "             Super Mushroom " << endl;
            else if (array[4]==3)
                cout << "             Fiery Plant " << endl;
            else if (array[4]==4)
                cout << "             Luigi " << endl;
            else if (array[4]==5)
                cout << "             Mario " << endl;
            else if (array[4]==6)
                cout << "             Super Star " << endl;
}
//This part of the function will evaluate the cards value, and return the answer
int value (int array[]){
    int x;  
    if (array[0]==1&&array[1]==1&&array[2]==1&&array[3]==1&&array[4]==1)

   x+=19;

    // if the deck has 4 clouds
    else if (array[0]==1&&array[1]==1&&array[2]==1&&array[3]==1||
    array[1]==1&&array[2]==1&&array[3]==1&&array[4]==1||
    array[0]==1&&array[2]==1&&array[3]==1&&array[4]==1||
    array[1]==1&&array[0]==1&&array[3]==1&&array[4]==1||
    array[0]==1&&array[1]==1&&array[2]==1&&array[4]==1)

   x+=13;

    //if the deck has 3 clouds   
    else if  (array[0]==1&&array[1]==1&&array[2]==1||array[2]==1&&array[3]==1
            &&array[4]==1|| array[0]==1&&array[2]==1&&array[4]==1||array[0]==1&&
            array[3]==1&&array[4]==1||array[0]==1&&array[1]==1&&array[4]==1||
            array[3]==1&&array[1]==1&&array[4]==1||array[1]==1&&
            array[3]==1&&array[4]==1||array[0]==1&&array[1]==1&&array[3]==1||
    array[1]==1&&array[2]==1&&array[3]==1||array[1]==1&&array[2]==1&&array[4]==1)

        x+=7;


    //if the deck has 1 pair of clouds 
    else if (array[0]==1&&array[1]==1||array[0]==1&&array[1]==1||array[0]==1&&array[2]==1
    ||array[0]==1&&array[3]==1||array[0]==1&&array[4]==1||array[1]==1&&array[2]==1||
    array[1]==1&&array[3]==1||array[1]==1&&array[4]==1||array[2]==1&&array[3]==1||
    array[2]==1&&array[4]==1||array[3]==1&&array[4]==1)

        x+=1;

    //--------------end of cloud senario-----------------------------------------//

    //If the deck has five Super Mushroom 
    if (array[0]==2&&array[1]==2&&array[2]==2&&array[3]==2&&array[4]==2)

    x+=20;

    // if the deck has 4 Super Mushroom
    else if (array[0]==2&&array[1]==2&&array[2]==2&&array[3]==2||
    array[1]==2&&array[2]==2&&array[3]==2&&array[4]==2||
    array[0]==2&&array[2]==2&&array[3]==2&&array[4]==2||
    array[1]==2&&array[0]==2&&array[3]==2&&array[4]==2||
    array[0]==2&&array[1]==2&&array[2]==2&&array[4]==2)

    x+=14;

    //if the deck has 3 Super Mushroom 
    else if  (array[0]==2&&array[1]==2&&array[2]==2||array[2]==2&&array[3]==2&&
            array[4]==2||
    array[0]==2&&array[2]==2&&array[4]==2||array[0]==2&&array[3]==2&&array[4]==2||
    array[0]==2&&array[1]==2&&array[4]==2||array[3]==2&&array[1]==2&&array[4]==2||
    array[1]==2&&array[3]==2&&array[4]==2||array[0]==2&&array[1]==2&&array[3]==2||
    array[1]==2&&array[2]==2&&array[3]==2||array[1]==2&&array[2]==2&&array[4]==2)

        x+=8;

    //1 pair of super mushrooms
    else if (array[0]==2&&array[1]==2||array[0]==2&&array[1]==2||array[0]==2&&
            array[2]==2||
    array[0]==2&&array[3]==2||array[0]==2&&array[4]==2||array[1]==2&&array[2]==2||
    array[1]==2&&array[3]==2||array[1]==2&&array[4]==2||array[2]==2&&array[3]==2||
    array[2]==2&&array[4]==2||array[3]==2&&array[4]==2)

        x+=2;

    //--------------end of Mushroom senario---------------------------------------//

    //If the deck has five fiery plants
    if (array[0]==3&&array[1]==3&&array[2]==3&&array[3]==3&&array[4]==3)

   x+=21;
    // if the deck has 4 fiery plants
    else if (array[0]==3&&array[1]==3&&array[2]==3&&array[3]==3||
    array[1]==3&&array[2]==3&&array[3]==3&&array[4]==3||
    array[0]==3&&array[2]==3&&array[3]==3&&array[4]==3||
    array[1]==3&&array[0]==3&&array[3]==3&&array[4]==3||
    array[0]==3&&array[1]==3&&array[2]==3&&array[4]==3)

    x+=15;

    //if the deck has 3 Fiery plants 
    else if  (array[0]==3&&array[1]==3&&array[2]==3||array[2]==3&&array[3]==3&&
            array[4]==3||
    array[0]==3&&array[2]==3&&array[4]==3||array[0]==3&&array[3]==3&&array[4]==3||
    array[0]==3&&array[1]==3&&array[4]==3||array[3]==3&&array[1]==3&&array[4]==3||
    array[1]==3&&array[3]==3&&array[4]==3||array[0]==3&&array[1]==3&&array[3]==3||
    array[1]==3&&array[2]==3&&array[3]==3||array[1]==3&&array[2]==3&&array[4]==3)

    x+=9;

    //1 pair of fiery plants
    else if (array[0]==3&&array[1]==3||array[0]==3&&array[1]==3||array[0]==3&&
            array[2]==3||
    array[0]==3&&array[3]==3||array[0]==3&&array[4]==3||array[1]==3&&array[2]==3||
    array[1]==3&&array[3]==3||array[1]==3&&array[4]==3||array[2]==3&&array[3]==3||
    array[2]==3&&array[4]==3||array[3]==3&&array[4]==3)

    x+=3;

    //--------------------end of Plant senario------------------------------------//   

    //If the deck has five Luigi
    if (array[0]==4&&array[1]==4&&array[2]==4&&array[3]==4&&array[4]==4)

    x+=22;

    // if the deck has 4 Luigi
    else if (array[0]==4&&array[1]==4&&array[2]==4&&array[3]==4||
    array[1]==4&&array[2]==4&&array[3]==4&&array[4]==4||
    array[0]==4&&array[2]==4&&array[3]==4&&array[4]==4||
    array[1]==4&&array[0]==4&&array[3]==4&&array[4]==4||
    array[0]==4&&array[1]==4&&array[2]==4&&array[4]==4)

   x+=16;

    //if the deck has 3 Luigi
    else if  (array[0]==4&&array[1]==4&&array[2]==4||array[2]==4&&array[3]==4
            &&array[4]==4||
    array[0]==4&&array[2]==4&&array[4]==4||array[0]==4&&array[3]==4&&array[4]==4||
    array[0]==4&&array[1]==4&&array[4]==4||array[3]==4&&array[1]==4&&array[4]==4||
    array[1]==4&&array[3]==4&&array[4]==4||array[0]==4&&array[1]==4&&array[3]==4||
    array[1]==4&&array[2]==4&&array[3]==4||array[1]==4&&array[2]==4&&array[4]==4)

   x+=10;

    //1 pair of Luigis
    else if (array[0]==4&&array[1]==4||array[0]==4&&array[1]==4||array[0]==4
            &&array[2]==4||
    array[0]==4&&array[3]==4||array[0]==4&&array[4]==4||array[1]==4&&array[2]==4||
    array[1]==4&&array[3]==4||array[1]==4&&array[4]==4||array[2]==4&&array[3]==4||
    array[2]==4&&array[4]==4||array[3]==4&&array[4]==4)

        x+=4;

    //--------------end of Luigi senario-----------------------------------------//

    //If the deck has five Mario 
    if (array[0]==5&&array[1]==5&&array[2]==5&&array[3]==5&&array[4]==5)

    x+=23;

    // if the deck has 4 Mario 
    else if (array[0]==5&&array[1]==5&&array[2]==5&&array[3]==5||
    array[1]==5&&array[2]==5&&array[3]==5&&array[4]==5||
    array[0]==5&&array[2]==5&&array[3]==5&&array[4]==5||
    array[1]==5&&array[0]==5&&array[3]==5&&array[4]==5||
    array[0]==5&&array[1]==5&&array[2]==5&&array[4]==5)


  x+=17;

    //if the deck has 3 Mario 
    else if  (array[0]==5&&array[1]==5&&array[2]==5||array[2]==5&&array[3]==5
            &&array[4]==5||
    array[0]==5&&array[2]==5&&array[4]==5||array[0]==5&&array[3]==5&&array[4]==5||
    array[0]==5&&array[1]==5&&array[4]==5||array[3]==5&&array[1]==5&&array[4]==5||
    array[1]==5&&array[3]==5&&array[4]==5||array[0]==5&&array[1]==5&&array[3]==5||
    array[1]==5&&array[2]==5&&array[3]==5||array[1]==4&&array[2]==5&array[4]==5)

   x+=11;

    //1 pair of Marios
    else if (array[0]==5&&array[1]==5||array[0]==5&&array[1]==5||array[0]==5
            &&array[2]==5||
    array[0]==5&&array[3]==5||array[0]==5&&array[4]==5||array[1]==5&&array[2]==5||
    array[1]==5&&array[3]==5||array[1]==5&&array[4]==5||array[2]==5&&array[3]==5||
    array[2]==5&&array[4]==5||array[3]==5&&array[4]==5)

        x+=5;

    //--------------end of Mario senario-----------------------------------------//

    //If the deck has five Super Star
    if (array[0]==6&&array[1]==6&&array[2]==6&&array[3]==6&&array[4]==6)

   x+=24;

    // if the deck has 4 Super Star
    else if (array[0]==6&&array[1]==6&&array[2]==6&&array[3]==6||
    array[1]==6&&array[2]==6&&array[3]==6&&array[4]==6||
    array[0]==6&&array[2]==6&&array[3]==6&&array[4]==6||
    array[1]==6&&array[0]==6&&array[3]==6&&array[4]==6||
    array[0]==6&&array[1]==6&&array[2]==6&&array[4]==6)

    x+=18;

    //if the deck has 3 Super Star
    else if  (array[0]==6&&array[1]==6&&array[2]==6||array[2]==6&&array[3]==6&&
            array[4]==6||
    array[0]==6&&array[2]==6&&array[4]==6||array[0]==6&&array[3]==6&&array[4]==6||
    array[0]==6&&array[1]==6&&array[4]==6||array[3]==6&&array[1]==6&&array[4]==6||
    array[1]==6&&array[3]==6&&array[4]==6||array[0]==6&&array[1]==6&&array[3]==6||
    array[1]==6&&array[2]==6&&array[3]==6||array[1]==6&&array[2]==6&&array[4]==6)

    x+=12;

    //1 Pair of Super Star
    else if (array[0]==6&&array[1]==6||array[0]==6&&array[1]==6||array[0]==6&&
            array[2]==6||
    array[0]==6&&array[3]==6||array[0]==6&&array[4]==6||array[1]==6&&array[2]==6||
    array[1]==6&&array[3]==6||array[1]==6&&array[4]==6||array[2]==6&&array[3]==6
    ||array[2]==6&&array[4]==6||array[3]==6&&array[4]==6)

        x+=6;

    //--------------end of Star senario-----------------------------------------//

    //Beginning of senario if the person has no pairs of array[0]s
    if (array[0]!=array[1]&&array[0]!=array[2]&&array[0]!=array[3]&&
    array[0]!=array[4]&&array[1]!=array[2]&&
    array[1]!=array[3]&&array[1]!=array[4]&&array[2]!=array[3]&&
    array[2]!=array[4]&&array[3]!=array[4])

        x+=0;
    x++;
    return x;
}