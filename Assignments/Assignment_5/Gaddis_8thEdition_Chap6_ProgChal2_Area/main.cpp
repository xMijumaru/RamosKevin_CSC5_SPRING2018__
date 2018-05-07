/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: kevin
 *
 * Created on May 6, 2018, 6:29 PM
 */

#include <cstdlib>
#include <iostream>
using namespace std;

float area (float, float);
int main(int argc, char** argv) {
    float length, width, sum;
    
    cout << "Area of a rectangle program " <<endl;
    cout << "Enter the length of the rectangle " <<endl;
    cin>>length;
    cout << "Enter the width of the triangle " << endl;
    cin >> width;
    sum= area (length, width);
    cout << "The area of the rectangle is " << sum << endl;
    return 0;
}

float area (float length, float width)
{
    
    return (length * width);
    
}