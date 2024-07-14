#include <iostream>
using namespace std;
class carspecs{
    int doors;
    int wheels;
    int car_speed;
public:
    carspecs(int w,int d,int s){
        wheels=w;
        doors=d;
        car_speed=s;
    }

    carspecs(){
        wheels=wheels+2;
        doors=doors+2;
    }

    void display(){
        cout<<"no of wheels are"<<wheels<<endl<<"no of doors are "<<doors<<endl<<"speed is "<<car_speed;
    }
};

int main(){
    carspecs c(4,2,0);
    c.display();
    
    
}
