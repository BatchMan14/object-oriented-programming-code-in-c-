//Create a class named “CarSpecs”, this class must contain attributes namely doors,
//wheels, car_speed.
//The default value for wheels is 4 and for doors 2 and speed is 0. You need to create two
//functions namely Civic and Rubicon. Civic should be set on default values while Rubicon
//to be incremented by 2 wheels and 2 doors. Two more functions namely Speed should
//increment the speed of vehicles by 7 while the break function should decrease the speed
//by 7. Print the current speed.
#include <iostream>
using namespace std;
class carspecs{
private:
    int car_speed;
    int doors;
    int wheels;
public:
    carspecs(){
        this->car_speed=0;
        this->doors=2;
        this->wheels=4;
    }
    void civic(){
        
    }
    void rubicon(){
        this->doors=doors+2;;
        this->wheels=wheels+2;
    }
    void speed(){
        this->car_speed=car_speed+7;
    }
    void breaking(){
        this->car_speed=car_speed-7;
    }
};
int main(){
carspecs c;
    
}
