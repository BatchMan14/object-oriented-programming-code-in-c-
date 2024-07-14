#include <iostream>
using namespace std;
class bus;
class car{
    float length;
public:
    car(float l){
        length=l;
    }
    friend void max(car &obj1, bus &obj2);
};
class bus{
    float length;
public:
    bus(float l){
        length=l;
    }
    friend void max(car &obj1, bus &obj2);

};
void max(car &obj1, bus &obj2){
    if(obj1.length>obj2.length){
        cout<<"car length is greator"<<endl;
    }else{
        cout<<"bus length is greator"<<endl;
    }
    }

int main(){
    bus obj2(16.7);
    car obj1(20.07);
    max(obj1,obj2);
}
