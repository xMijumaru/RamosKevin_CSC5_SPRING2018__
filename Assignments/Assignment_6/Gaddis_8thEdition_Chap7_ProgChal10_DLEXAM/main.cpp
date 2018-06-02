/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 17, 2018, 7:16 AM
 */
#include <iomanip>
#include <cstdlib>
#include <iostream>
using namespace std;

//Purpose : Grades a drivers license exam

int correct (char[], char[], int);

int main(int argc, char** argv) {
    const int ques=20; //Number of Questions on the exam
    char answer[ques] = {'A','D','B','B','C','B','A','B','C','D','A','C','D',
                        'B','D','C','C','A','D','B'};
    char choice[ques];
    int total;
    for (int i=0; i <ques; i++)
    {
        cout << "Enter your answer in Capital letters for"
              <<  " Question " << i+1 << " : ";
        do{        
        cin>>choice[i];
        }while (choice[i]!='A'&&choice[i]!='B'&&choice[i]!='C'&&choice[i]!='D'); 
    }
    total = correct(answer, choice, ques);
    cout << "You got " << total << " Answers correct " << endl;
    cout << fixed << showpoint << setprecision(1);
   
    cout << "Percentage: " 
         << (static_cast<float>(total)/ques)*100.0f << "%" << endl;
    if (total>=15)
        cout << "You have passed the test" << endl;
    else 
        cout << "You have failed the test " << endl;
    return 0;
}

int correct (char answer[], char choice [], int ques)
{   int correct=0;
    for (int i=0;i<20;i++)
        if (answer[i]==choice[i])
            correct++;
    return correct;
}