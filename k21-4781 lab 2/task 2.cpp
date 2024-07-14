//Write a C++ program that implements at least three functions, the functions can be
//“input”, “cal” for calculation and “output”. You need to read the length input by users
//in feet and inches and you need to calculate the equivalent length in meters and
//centimeters. The program must keep on repeating the same sequence (a loop can
//be used in this case) until the user wants to end the program.
#include <iostream>
using namespace std;
float meter; float centi; float feet; float inches;
void input (){
cout<<"Enter Feet: ";
cin>>feet;
cout<<"Enter Values in Inches: ";
cin>>inches;
}
void cal(){
meter = feet * 0.3048 + (inches * 0.0254);
centi = (feet * 30.48 + inches * 2.54);
}
void output(){
    cout<<"Your result are as followings :"<<endl<<"meter :"<<meter <<endl<<"centi :"<<centi;
}
int main(){
    input();
    cal();
    output();
}
