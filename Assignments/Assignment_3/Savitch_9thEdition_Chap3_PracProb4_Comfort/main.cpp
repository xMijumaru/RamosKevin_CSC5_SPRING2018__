/* 
 * File:   main.cpp
 * Author:
 * Created on March 17, 2018, 12:05 PM
 * Purpose:  Horoscope
 *           To be copied for each project
 */

//System Libraries
#include <iostream> //I/O Library -> cout,endl
using namespace std;//namespace I/O stream library created

//User Libraries

//Global Constants
//Math, Physics, Science, Conversions, 2-D Array Columns

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float mon;//month that the person was born in
    float day;   //day the person the born in
    int zodiac;
    //Display Outputs
    cout<<"This program calculates your astrolgy element and which other signs";
    cout<<"more comfortable with "<<endl;
    cout<<"Enter your birthday month ( 1-12): ";
    cin>>mon;
    cout<<"Enter the day of your birth: ";
    cin>>day;
    
    if (mon==3&&day>=21&&day<=31||mon==4&&day<=19&&day>=1)
        zodiac=1;
    else if (mon==4&&day>=20&&day<=30||mon==5&&day<=20&&day>=1)
        zodiac=2;
    else if (mon==5&&day>=21&&day<=31||mon==6&&day<=21&&day>=1)
        zodiac=3;
    else if (mon==6&&day>=22&&day<=30||mon==7&&day<=22&&day>=1)
        zodiac=4;
    else if (mon==7&&day>=23&&day<=31||mon==8&&day<=22&&day>=1)
        zodiac=5;
    else if (mon==8&&day>=23&&day<=31||mon==9&&day<=22&&day>=1)
        zodiac=6;
    else if (mon==9&&day>=23&&day<=31||mon==10&&day<=22&&day>=1)
        zodiac=7;
    else if (mon==10&&day>=23&&day<=31||mon==11&&day<=21&&day>=1)
        zodiac=8;
    else if (mon==11&&day>=22&&day<=30||mon==12&&day<=21&&day>=1)
        zodiac=9;
    else if (mon==12&&day>=22&&day<=31||mon==1&&day<=19&&day>=1)
        zodiac=10;
    else if (mon==1&&day>=20&&day<=31||mon==2&&day<=18&&day>=1)
        zodiac=11;
    else if (mon==2&&day>=19&&day<=29||mon==3&&day<=20&&day>=1)
        zodiac=12;
    
    switch (zodiac)
    {
        case 1:
            cout<<"Your element is fire and you are more comfortable with "
                     "Aries, Leo,and Sagittarius";
            break;
        case 2: 
            cout<<"Your element is Earth and you are more comfortable with "
                     "Taurus,Virgo, and Capricorn";
            break;
        case 3:
            cout<<"Your element is Air and you are more comfortable with "
                     "Gemini, Libra, and Aquarius";
             break;
        case 4:
             cout<<"Your element is Water and you are more comfortable with "
                     "Cancer, Scorpio, and Pisces";
             break;
         case 5:
             cout<<"Your element is fire and you are more comfortable with "
                     "Aries, Leo, and Sagittarius";
             break;
        case 6:
             cout<<"Your element is Earth and you are more comfortable with "
                     "Taurus,Virgo, and Capricorn";
             break;
        case 7:
            cout<<"Your element is Air and you are more comfortable with "
                     "Gemini, Libra, and Aquarius";
             break;
        case 8:
            cout<<"Your element is Water and you are more comfortable with "
                     "Cancer, Scorpio, and Pisces";
             break;
        case 9:
           cout<<"Your element is fire and you are more comfortable with "
                     "Aries, Leo, and Sagittarius";
             break;
        case 10:
             cout<<"Your element is Earth and you are more comfortable with "
                     "Taurus, Virgo, and Capricorn";
             break;
        case 11:
           cout<<"Your element is Air and you are more comfortable with "
                     "Gemini, Libra, and Aquarius";
             break;
        case 12:
            cout<<"Your element is Water and you are more comfortable with "
                     "Cancer, Scorpio, and Pisces";
             break;
            default:
            cout<<"\nYou have no comforts because you cant follow rules";
    }
         

   //Exit program!
    return 0;
}