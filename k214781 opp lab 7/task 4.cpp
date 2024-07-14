#include<iostream>
using namespace std;
class employees{
    float pay;
public:
    void set_p(float p){
        pay=p;
    }
    float get_pay(){
        return pay;
    }
};
class salaried_employees:public employees{
    
public:
    void set_pay(float p){
        set_p(p);
    }
    float cal(){
        cout<<"salary is incremented by 10%"<<endl;
        return get_pay()+get_pay()*0.1;
    }
};
class hourly_employees:public employees{
public:
    void set_pay(float p){
        set_p(p);
    }
    float cal(){
        int h,c;
        cout<<"enter the number of hours worked";
        cin>>h;
        cout<<"overtime "<<endl<<"1:yes"<<endl<<"2:no"<<endl;
        cin>>c;
        if(c==1){
            return (get_pay()*1.5)*h;
        }else
            return get_pay()*h;
        }
};
class comission_employees:public employees{
public:
    void set_pay(float p){
        set_p(p);
    }
    float cal(){
        cout<<"salary is incremented by 10%"<<endl;
        return get_pay()+get_pay()*0.1;
    }
};
class base_salaried_employees:public employees{
public:
    void set_pay(float p){
        set_p(p);
    }
    
};
int main(){
    
}
