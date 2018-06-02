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
#include <vector>   //Vector library
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here
bool player(int);//This boolian will take in the number of players that will be
                //playing the game, by returning a true or false value

void cardread(int []);//This function will read the values of each card, 
                        //and display an output in response to said card

int value(int []);    //This function is designed to evaluate the cards the 
                       //player got, and display the value of the cards

void table();       //When option 1 is chosen, the function will initiate by
                    //displaying the table, and its card values

void pltbl(string);   //This table initiates when the 1 player option is 
                      //chosen
void card1 (int []); //This function will evaluate each card

void pause (int);   //Pauses

//Program Execution Begins Here
int main(int argc, char** argv) {
//set the random number seed
srand(static_cast<unsigned int>(time(0)));
    
    ifstream in;               //Input File
    ofstream out;              //Output File
    
//Declare all Variables outside of the switch Here
//Variables in the option 1-------------------------------------------------
const int cardta=5;//The card table in the first option will display this

const int rulep=2;//This game will have about 2 players in the 2 dimensional
                  //array
int deck[cardta]={1,2,3,4,5};   //The hand of the card in the array

int deck2[rulep][cardta]={{1,2,3,4,5},{1,2,3,4,5}};//the value of the 2 table

int plyr[rulep]={1,2};  //In the first option of the switch statement, this 
                    //parallel array will output the amount of cards a 
                    //player will get in the 2 player option
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
string name1;//when the game initiates 2 players, this will be player ones 
             //name
string name2; //when the game initiates 2 players, this will be the second
            //players name
char another;//If the person wants to play again for the 2 player option

int games;//The game itself will play 40,000 games 
    
const int hand=5;//The amount of cards that will dispensed to each players
                  //hand 
char plyr1;     //If the player wants to switch cards

char plyr2; //If the second player wants to switch any cards

//This is the start of the menu which prompts the program to make a choice
//whether to play the game or to view the value of the cards
   
    cout << "*****************************************" << endl;
    cout << "*                                       *" << endl;
    cout << "*    WELCOME TO PICTURE POKER           *" << endl;
    cout << "*                                       *" << endl;
    cout << "*****************************************" << endl;
    
    cout << "Type 1 to view the value of the cards " << endl;
    cout << "Type 2 to play the game " << endl;
    cout << "Type anything else to end the program " << endl;
       
    cin>> choice;
      if(choice>='1'&&choice<='3')
          switch (choice){
            
case '1':{
table();
    cout << "The player will receive " << endl;      
        for (int x=0;x<5;x++){
                cout << deck[x] << " ";
            }
    cout << endl;
    cout << "Cards" << endl;
    cout << "\nIn a two player game: " << endl;
    for (int y=0;y<2;y++){
         cout << "Player " << plyr[y] << ": ";
            for (int z=0;z<5;z++){
                 cout  << deck2[y][z]<<" ";
        }
        cout << "Cards" << endl;
    }cout <<endl;
    cout << "Restart the program to play the game" << endl;
break;
}
          
case '2':{
//welcome screen of the 2nd case           
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

int plyrc[hand]={rand()%6+1,rand()%6+1,rand()%6+1,
           rand()%6+1,rand()%6+1};
int array2 [hand]={rand()%6+1,rand()%6+1,rand()%6+1,
           rand()%6+1,rand()%6+1};

 //Selection sort in order to sort the cards from least to greatest
          //This sorts the first player
     

           cout << name1 << " cards are :" << endl;
            cardread(plyrc);
           cout << name2 << " cards are :" << endl;
           cardread (array2);
        
     //pause(7); //pauses for approxometly 5 seconds
      
           cout << "Player 1 results: " << endl;
           //This sorts the 1st player using the bubble sort
           for (int x=0;x<hand;x++){
               for ( int y=x+1;y<hand+1; y++){
                   int temp;
                   if (plyrc[x]>plyrc[y]){
                       temp = plyrc[x];
                    plyrc[x]=plyrc[y];   
                    plyrc[y]=temp;
                    
                   }
               }
           }
           card1(plyrc);
           cout << "Player 2 results: " << endl;
  //This sorts the second player using selection sort
     for (int x=0;x<hand;x++){
         for (int y=0; y<5; y++){
             if (array2[y]>array2[y+1]){
                 int temp=array2[y];
                 array2[y]=array2[y+1];
                 array2[y+1]=temp;
             }
         }
     }      
           card1(array2);
           cout << "Do you want to try again? (Y/N): ";
           cin >> another;
       }while (another=='y'||another=='Y');
}    
else if (onetwo==false){
cout << "\nEnter the name of the user: ";
        cin >> name;
 do 
 {
int name1 [hand]={rand()%6+1,rand()%6+1,
    rand()%6+1,rand()%6+1,rand()%6+1};

   //If the player would like to switch any cards
     cout << "*****************************************" << endl;
     cout << "                 Hello " << name << "              " << endl;
     cout << "*****************************************" 
          << "\n            Your Five Cards are: " <<endl;
     cardread(name1);
     
     //Selection sort in order to sort the cards from least to greatest
     for (int x=0;x<hand;x++){
         for (int y=0; y<5; y++){
             if (name1[y]>name1[y+1]){
                 int temp=name1[y];
                 name1[y]=name1[y+1];
                 name1[y+1]=temp;
             }
         }
     }
     card1(name1);
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

          }
          
 else
    cout << "Exiting program ";
 
//Close Files and Exit stage 
    in.close();
    out.close();
    //Exit
    return 0;
}

//Functions

//This part of the function is initiated when the player decides how many people
//will be participating in the program. If the person chooses option 1, then the
//program returns a false, and if the player wants to play with 2 players, then
//The boolian returns a true
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

//This function in the player one option will output the table of cards, and their
//corresponding card values
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
//This function is meant to output the value of the table when the player
//decides to choose the first option of the game
void table(){
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
            << "\n********************************" <<endl;
   

}
void card1 (int card[]){
   //clouds
     if (card[0]==1&&card[1]==1&&card[2]==1&&card[3]==1&&card[4]==1){
         cout << "Five of a kind of clouds " << endl;
     }
    else if (card[0]==1&&card[1]==1&&card[2]==1&&card[3]==1){
       cout << "Four of a kind of clouds" << endl;  
     }
    else if (card[0]==1&&card[1]==1&&card[2]==1){
         cout << "Three of a kind of clouds" << endl;
     }
    else if (card[0]==1&&card[1]==1){
         cout << "Pair of clouds" << endl;
    }
     //mushroom
    if (card[0]==2&&card[1]==2&&card[2]==2&&card[3]==2&&card[4]==2){
         cout << "Five of a kind of Super Mushroom " << endl;
     }
    else if (card[0]==2&&card[1]==2&&card[2]==2&&card[3]==2||
            card[1]==2&&card[2]==2&&card[3]==2&&card[4]==2){
       cout << "Four of a kind of Super Mushroom" << endl;  
     }
    else if (card[0]==2&&card[1]==2&&card[2]==2||
            card[1]==2&&card[2]==2&&card[3]==2||
            card[2]==2&&card[3]==2&&card[4]==2){
         cout << "Three of a kind of Super Mushroom" << endl;
     }
    else if (card[0]==2&&card[1]==2||card[1]==2&&card[2]==2||
            card[2]==2&&card[3]==2||card[3]==2&&card[4]==2){
         cout << "Pair of Super Mushroom" << endl;
    }
     //plant
     if (card[0]==3&&card[1]==3&&card[2]==3&&card[3]==3&&card[4]==3){
         cout << "Five of a kind of Firey Plant " << endl;
     }
    else if (card[0]==3&&card[1]==3&&card[2]==3&&card[3]==3||
            card[1]==3&&card[2]==3&&card[3]==3&&card[4]==3){
       cout << "Four of a kind of Firey Plant " << endl;  
     }
    else if (card[0]==3&&card[1]==3&&card[2]==3||
            card[1]==3&&card[2]==3&&card[3]==3||
            card[2]==3&&card[3]==3&&card[4]==3){
         cout << "Three of a kind of Firey Plant " << endl;
     }
    else if (card[0]==3&&card[1]==3||card[1]==3&&card[2]==3||
            card[2]==3&&card[3]==3||card[3]==3&&card[4]==3){
         cout << "Pair of Firey Plant " << endl;
    }
     //Luigi
     if (card[0]==4&&card[1]==4&&card[2]==4&&card[3]==4&&card[4]==4){
            cout << "Five of a kind of Luigi " << endl;
     }
    else if (card[0]==4&&card[1]==4&&card[2]==4&&card[3]==4||
            card[1]==4&&card[2]==4&&card[3]==4&&card[4]==4){
       cout << "Four of a kind of Luigi " << endl;  
     }
    else if (card[0]==4&&card[1]==4&&card[2]==4||
            card[1]==4&&card[2]==4&&card[3]==4||
            card[2]==4&&card[3]==4&&card[4]==4){
         cout << "Three of a kind of Luigi " << endl;
     }
    else if (card[0]==4&&card[1]==4||card[1]==4&&card[2]==4||
            card[2]==4&&card[3]==4||card[3]==4&&card[4]==4){
         cout << "Pair of Luigi " << endl;
    }
     //mario
     if (card[0]==5&&card[1]==5&&card[2]==5&&card[3]==5&&card[4]==5){
            cout << "Five of a kind of Mario " << endl;
     }
    else if (card[0]==5&&card[1]==5&&card[2]==5&&card[3]==5||
            card[1]==5&&card[2]==5&&card[3]==5&&card[4]==5){
       cout << "Four of a kind of Mario " << endl;  
     }
    else if (card[0]==5&&card[1]==5&&card[2]==5||
            card[1]==5&&card[2]==5&&card[3]==5||
            card[2]==5&&card[3]==5&&card[4]==5){
         cout << "Three of a kind of Mario " << endl;
     }
    else if (card[0]==5&&card[1]==5||card[1]==5&&card[2]==5||
            card[2]==5&&card[3]==5||card[3]==5&&card[4]==5){
         cout << "Pair of Mario " << endl;
    }
     //super star
     if (card[0]==6&&card[1]==6&&card[2]==6&&card[3]==6&&card[4]==6){
            cout << "Five of a kind of Super Star " << endl;
     }
    else if (card[0]==6&&card[1]==6&&card[2]==6&&card[3]==6||
            card[1]==6&&card[2]==6&&card[3]==6&&card[4]==6){
       cout << "Four of a kind of Super Star " << endl;  
     }
    else if (card[0]==6&&card[1]==6&&card[2]==6||
            card[1]==6&&card[2]==6&&card[3]==6||
            card[2]==6&&card[3]==6&&card[4]==6){
         cout << "Three of a kind of Super Star " << endl;
     }
    else if (card[0]==6&&card[1]==6||card[1]==6&&card[2]==6||
            card[2]==6&&card[3]==6||card[3]==6&&card[4]==6){
         cout << "Pair of Super Star " << endl;
    }
    else if (card[0]!=card[1]&&card[1]!=card[2]&&card[2]!=card[3]&&
            card[3]!=card[4]){
        cout << "You have junk" << endl;
    }
 }
//This function will pause the game whenever it is needed
void pause (int secs){
    int begin=time(0); //Time at the beginning
    int end;
    do{
        end = time (0);
    }while ((end-begin)<secs);
}