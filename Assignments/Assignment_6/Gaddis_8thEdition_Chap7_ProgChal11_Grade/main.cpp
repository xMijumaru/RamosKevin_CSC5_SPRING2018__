
/* 
 * File:   main.cpp
 * Author: kevin
 *  purpose: To find the average for the exam
 * Created on May 19, 2018, 9:56 AM
 */

#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
//Declare the variables here
    const int student=5;//number of students in the grade book
    const char let=5; //The letter grades that are in the system
    
    const int test=4;//The test scores of the students
    const float numt=5; // number of students who took test
    
    string name[student];//the name that will be inputted
    float stu1[test], ave1;
    float stu2[test], ave2;
    float stu3[test], ave3;
    float stu4[test], ave4;
    float stu5[test], ave5;
    
    
    //The inputs will occur here
    for (int a=0;a<5;a++){
        cout << "Enter the name for student " << a+1 << ": ";
        cin >> name[a];
    }
    //Student 1
    for (int x=0; x<4; x++){
  cout << "Enter the grade percentage for " << name[0]
          << " Test " << x+1 << ": ";
            cin >> stu1[x];
            ave1+=stu1[x];
    }
  //Student 2
    for (int x=0; x<4; x++){
  cout << "Enter the grade percentage for " << name[1]
          << " Test " << x+1 << ": ";
            cin >> stu2[x];
            ave2+=stu2[x];
    }
    //Student 3
    for (int x=0; x<4; x++){
  cout << "Enter the grade percentage for " << name[2]
          << " Test " << x+1 << ": ";
            cin >> stu3[x];
            ave3+=stu3[x];
    }
    //Student 4
    for (int x=0; x<4; x++){
  cout << "Enter the grade percentage for " << name[3]
          << " Test " << x+1 << ": ";
            cin >> stu4[x];
            ave4+=stu4[x];
    }
    //Student 5
    for (int x=0; x<4; x++){
  cout << "Enter the grade percentage for " << name[4]
          << " Test " << x+1 << ": ";
            cin >> stu5[x];
            ave5+=stu5[x];
    }
   
    //Display outputs
    cout << fixed <<setprecision(1)<<showpoint;
    cout << name[0] << " has a " << ave1/4 << "%" << endl;
    cout << name[1] << " has a " << ave2/4 << "%" << endl;
    cout << name[2] << " has a " << ave3/4 << "%" << endl;
    cout << name[3] << " has a " << ave4/4 << "%" << endl;
    cout << name[4] << " has a " << ave5/4 << "%" << endl;
    return 0;
}