#include<iostream>
using namespace std;
class shape{
    protected:
    double x;
    double y;
    public:
    void get_date(){
        cout<<"enter x "<<endl;
        cin>>this->x;
        cout<<"enter y "<<endl;
        cin>>this->y;
    }
    virtual void display_area(){
        
    }
};
class rect:public shape{
    public:
        void display_area(){
            cout<<"area of rect is "<<x*y;
        }
};
class tri:public shape{
        public:
        void display_area(){
            cout<<endl<<"area of tri is "<<0.5*x*y;
        }
};
int main(){
shape *a;
rect r;
a=&r;
tri  t;
a=&t;
r.get_date();
t.get_date();
r.display_area();
t.display_area();


}
