#include <iostream>
using namespace std;
class laptop{
    protected:
    int model;
    float price;
    public:
        virtual void set_value();
        virtual void get_value();
};
class company:public laptop{
    public:
        void set_values(){
            cout<<"enter the model of the laptop "<<endl;
            cin>>model;
            cout<<"enter the price of the laptop "<<endl;
            cin>>price;
        }
        
};
class color:public laptop{
    string c;
    public:
        void set_values(){
            cout<<"enter the model of the laptop "<<endl;
            cin>>model;
            cout<<"enter the price of the laptop "<<endl;
            cin>>price;
            cout<<"enter the color of the laptop "<<endl;
            cin>>c;
        }
        void get_value(){
             cout<<"details of the laptop are "<<endl<<"model:"<<model<<endl<<"price:"<<price<<endl<<"color:"<<c<<endl;
         
        }
};

int main(){
int co;
cout<<"1:color and company "<<endl<<"2:company"<<endl;
cin>>co;
if(co==1){
    color c;
    c.set_value();
    c.get_value();
}else if(co==2){
    company ca;
    ca.set_value();
    ca.get_value();
}
}

