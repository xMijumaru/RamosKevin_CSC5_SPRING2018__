/* 
 * File:   main.cpp
 * Author:
 * Created on March 16, 2018, 12:05 PM
 * Purpose:  CPP Template
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

int main(int argc, char** argv) {
//variable declaration
char usera;
char userb;


cout<<"Input paper, rock, or scissors"<<endl;
do
{
cout<<"User b: ";
cin>>userb;
} while (userb!='p'&&userb!='r'&&userb!='s'&&userb!='P'&&userb!='R'&&userb!='S');
do
{
cout<<"User a: ";
cin>>usera;
} while (usera!='p'&&usera!='r'&&usera!='s'&&usera!='P'&&usera!='R'&&usera!='S');
//tie game
if(userb=='p'&&usera=='p'||userb=='r'&&usera=='r'||userb=='s'&&usera=='s')
    cout<<"the game is tie";
if(userb=='P'&&usera=='P'||userb=='R'&&usera=='R'||userb=='S'&&usera=='S')
    cout<<"the game is tie";
if(userb=='p'&&usera=='P'||userb=='r'&&usera=='R'||userb=='s'&&usera=='S')
    cout<<"the game is tie";
if(userb=='P'&&usera=='p'||userb=='R'&&usera=='r'||userb=='S'&&usera=='s')
    cout<<"the game is tie";

//PAPER BEATS ROCK
if (userb=='r'&&usera=='P'||userb=='R'&&usera=='P')
    cout<<"User A wins because Paper beats rock";
if (userb=='r'&&usera=='p'||userb=='P'&&usera=='r')
    cout<<"User A wins because Paper beats rock";
if (usera=='r'&&userb=='P'||usera=='R'&&userb=='P')
     cout<<"User B wins because Paper beats rock";
if (usera=='r'&&userb=='p'||usera=='R'&&userb=='p')
    cout<<"User B wins because Paper beats rock";

//SCISSORS BEAT PAPER
if (userb=='p'&&usera=='S'||userb=='P'&&usera=='S')
    cout<<"User A wins because Scissors beat paper";
if (userb=='p'&&usera=='s'||userb=='P'&&usera=='s')
    cout<<"User A wins because Scissors beat paper";
if (usera=='p'&&userb=='S'||usera=='P'&&userb=='S')
    cout<<"User B wins because Scissors beat paper";
if (usera=='p'&&userb=='s'||usera=='P'&&userb=='s')
    cout<<"User B wins because Scissors beat paper";

//ROCK BEATS SCISSORS
if (userb=='s'&&usera=='R'||userb=='S'&&usera=='R')
    cout<<"User A wins because Rock beats scissors";
if (userb=='s'&&usera=='R'||userb=='S'&&usera=='r')
    cout<<"User A wins because Rock beats scissors";
if (usera=='s'&&userb=='R'||usera=='S'&&userb=='R')
    cout<<"User B wins because Rock beats scissors";
if (usera=='s'&&userb=='R'||usera=='S'&&userb=='r')
    cout<<"User B wins Rock beats scissors";

return 0;
}