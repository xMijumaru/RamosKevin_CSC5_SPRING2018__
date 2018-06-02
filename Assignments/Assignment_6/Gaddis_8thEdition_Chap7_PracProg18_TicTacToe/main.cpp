/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 20, 2018, 3:37 PM
 */

#include <cstdlib>
#include <iomanip>
#include <cmath>
#include <iostream>
#include <ctime>
#include <string>
using namespace std;

/*
 * purpose: To create a Tic Tac Toe game
 */
int main(int argc, char** argv) {
    const int row=3;
    const int column=3;
    char choice[row][column]={{'1','2','3'},{'4','5','6'}, {'7','8','9'}};
    int player=1;
    int input;
    char choose;
    char answer;
    
    do{
        
    for (int rows=0;rows<row;rows++){
        for (int columns=0;columns<column;columns++){
            cout << choice[rows][columns] << "   "; 
        }
        cout << endl;
    }
    
     player=(player%2)?1:2;
     
    
    cout << "Player " << player << " input your choice:  ";
	cin>>input;
   
        //The beginning of my if statements to throw all possible senarios
        choose =(player == 1) ? 'X' : 'O';
        if (input==1&&choice[0][0]=='1'){
            choice[0][0]=choose;
        }
        else if (input==2&&choice[0][1]=='2'){
            choice[0][1]=choose;
        }
        else if (input==3&&choice[0][2]=='3'){
            choice[0][2]=choose;
        }
        else if (input==4&&choice[1][0]=='4'){
            choice[1][0]=choose;
        }
        else if (input==5&&choice[1][1]=='5'){
            choice[1][1]=choose;
        }
        else if (input==6&&choice[1][2]=='6'){
            choice[1][2]=choose;
        }
        else if (input==7&&choice[2][0]=='7'){
            choice[2][0]=choose;
        }
        else if (input==8&&choice[2][1]=='8'){
            choice[2][1]=choose;
        }
        else if (input==9&&choice[2][2]=='9'){
            choice[2][2]=choose;
        }
        else 
        {
            cout << "Your choice was out of bounds, You lose a turn" << endl;
        }
        
        if (choice[0][0]=='X'&&choice[0][1]=='X'&&choice[0][2]=='X'||
            choice[1][0]=='X'&&choice[1][1]=='X'&&choice[1][2]=='X'|| 
            choice[2][0]=='X'&&choice[2][1]=='X'&&choice[2][2]=='X'||
            choice[0][0]=='X'&&choice[1][0]=='X'&&choice[2][0]=='X'||
            choice[0][1]=='X'&&choice[1][1]=='X'&&choice[2][1]=='X'||
            choice[0][2]=='X'&&choice[1][2]=='X'&&choice[2][2]=='X'||
            choice[0][0]=='X'&&choice[1][1]=='X'&&choice[2][2]=='X'||
            choice[0][2]=='X'&&choice[1][1]=='X'&&choice[2][0]=='X')
                
        {
            answer='w';
        }
        else if (choice[0][0]=='O'&&choice[0][1]=='O'&&choice[0][2]=='O'||
            choice[1][0]=='O'&&choice[1][1]=='O'&&choice[1][2]=='O'|| 
            choice[2][0]=='O'&&choice[2][1]=='O'&&choice[2][2]=='O'||
            choice[0][0]=='O'&&choice[1][0]=='O'&&choice[2][0]=='O'||
            choice[0][1]=='O'&&choice[1][1]=='O'&&choice[2][1]=='O'||
            choice[0][2]=='O'&&choice[1][2]=='O'&&choice[2][2]=='O'||
            choice[0][0]=='O'&&choice[1][1]=='O'&&choice[2][2]=='O'||
            choice[0][2]=='O'&&choice[1][1]=='O'&&choice[2][0]=='O')
                
        {
            answer='a';
        }
        
       
        player--;
        
    }while (answer!='w'&&answer!='a');
     
    for (int rows=0;rows<row;rows++){
        for (int columns=0;columns<column;columns++){
            cout << choice[rows][columns] << "   "; 
        }
        cout << endl;
    }
    if (answer=='w'){
        cout << "\nPlayer 1 has won " << endl;
    }
    else if (answer=='a'){
        cout << "\nPlayer 2 has won " << endl;
    }
    
    return 0;
}

