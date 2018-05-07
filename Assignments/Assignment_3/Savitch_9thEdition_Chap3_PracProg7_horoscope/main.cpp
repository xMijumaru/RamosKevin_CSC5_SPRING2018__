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
    cout<<"This program calculates your zodiac sign"<<endl;
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
       cout<<"You are an Aries \nHoroscope: The Moon's arrival in your sign"
               "\n brings with it a boost to your confidence.";
            break;
        case 2: 
            cout<<"You are a Taurus \nHoroscope: If ever there was a time to "
                    "\ntake a risk with your heart, it's now!";
            break;
        case 3:
            cout<<"You are a Gemini \nHoroscope: Your home is where your heart "
                    "\nis at this time, and it would probably take an amazingly "
                    "\nintriguing offer or suggestion to get you to agree to "
                    "\nventure outside the comfort of your abode.";
             break;
        case 4:
            cout<<"You are a Cancer \nHoroscope: You might feel, once again, "
                    "\nthat the only way progress will be made in ways you want to"
                    "\nsee it made is if you take the initiative, or possibly "
                    "\nkick a backside or two.";
             break;
         case 5:
            cout<<"You are a Leo \nHoroscope: Your personal aspirations deserve"
                    "\nsome quiet, reflective time and the current backdrop"
                    "\nprovides it. ";
             break;
        case 6:
            cout<<"You are a Virgo \nHoroscope: You might appreciate the fact "
                    "\nthat others are entitled to their opinions but could "
                    "\nstruggle to be diplomatic if you sense they're not"
                    " \nconnecting with the logical way you believe something"
                    " \nshould be done.";
             break;
        case 7:
            cout<<"You are a Libra \nHoroscope: You might look at a long list "
                    "\nof tasks or responsibilities and wonder why you should "
                    "\nbe shouldering them. ";
             break;
        case 8:
            cout<<"You are a Scorpio \nHoroscope: A stroll down Memory Lane "
                    "\ncould be imminent, especially if you come into contact "
                    "\nwith someone who has an extensive history connected with "
                    "\nyour past.";
             break;
        case 9:
            cout<<"You are a Sagittarius \nHoroscope: There can be numerous"
                    "\n benefits to speaking your mind, provided you do so in"
                    "\n a way that doesn't cause others' hackles to rise.";
             break;
        case 10:
            cout<<"You are a Capricorn \nHoroscope: You appear able to apply a"
                    "\n mental filter on who's supportive of you and has your "
                    "\nbest interests at heart, and who's using you in some way "
                    "\nto pursue their own interests.";
             break;
        case 11:
            cout<<"You are an Aquarius \nHoroscope: There might be no escaping"
                    "\ntedious tasks and duty will have to come before pleasure "
                    "\nat this time.";
             break;
        case 12:
            cout<<"You are a Pisces \nHoroscope: Stick with the truth and stick"
                    " only with facts.  ";
             break;
        default:
            cout<<"Please learn how to properly follow rules :)";
             break;
    }
         

   //Exit program!
    return 0;
}
