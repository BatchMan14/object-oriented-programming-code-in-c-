//Karachi has been reporting massive changes in temperature and the windspeed, a
//phenomenon known as the windchill factor take into account the temperature and
//the windspeed and can calculate the chilling effect that the wind can propagate at
//any certain temperature.
//The formula for the windchill is given by:
//W = 13.12 + 0.6215 * t – 11.37 * v0.16 + 0.3965 * t * v0.016
//Where,
//v = wind speed in m/sec
//t = temperature in degrees Celsius: t <= 10
//W = windchill index (in degrees Celsius)
//You need to create a function that takes v and t as value parameters and return the
//value of W, the function must take the necessary precaution of ensuring that the
//restriction on the temperature in not breached.
#include <iostream>
using namespace std;
float cal(int v,int t){
    float w=0;
    w= 13.12 + 0.6215 * t - 11.37 * v * 0.16 + 0.3965 * t * v * 0.016 ;
    return w;
}
int main(){
    int v,t=0,w;
    cout<<"please enter the speed of wind in m/sec:"<<endl;
    cin>>v;
    while(t<=10){
        cout<<"please enter the temperature:"<<endl;
        cin>>t;
    }
    w=cal(v,t);
    cout<<"windchill index is :"<<w;
}
