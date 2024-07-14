#include <iostream>
using namespace std;
class laptop{
    string brand;
    string model;
    int serial;
    string color;
    float price;
    float processor_speed;
    int ram;
    float screen_size;
public:
    void set_all(){
        cout<<" please enter brand name ";
        cin>>brand;
        cout<<"please enter model ";
        cin>>model;
        cout<<"please enter serial number ";
        cin>>serial;
        cout<<"please enter color of your laptop ";
        cin>>color;
        cout<<"please enter price of the laptop ";
        cin>>price;
        cout<<"please enter processor speed ";
        cin>>processor_speed;
        cout<<"please enter ram ";
        cin>>ram;
        cout<<"please enter screen size";
        cin>>screen_size;
    }
    void set_ram(){
        cout<<"please enter ram ";
        cin>>ram;
    }
    void display(){
        cout<<"brand:"<<brand<<endl<<"model:"<<model<<endl<<"serial number:"<<serial<<endl<<"color:"<<color<<endl<<"price:"<<price<<endl<<"processor speed:"<<processor_speed<<endl<<"ram:"<<ram<<endl<<"screen size:"<<screen_size<<endl;
    }
};
int main(){
    int r;
    laptop l;
    l.set_all();
    cout<<"do u want to update ram "<<endl<<"1.yes"<<endl<<"2.no"<<endl;
    cin>>r;
    if(r==1){
        l.set_ram();
    }else
        l.display();
}
