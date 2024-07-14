#include<iostream>
#include<math.h>
using namespace std;
class point{
    protected:
    float x1,x2;
    float y1,y2;
    
    public:
        point(){
            cout<<"enter starting points"<<endl;
            cout<<"enter the value of x ";
            cin>>this->x1;
            cout<<"enter the value of y ";
            cin>>this->y1;
        }
        void set_x(){
            cout<<"enter the value of x ";
            cin>>this->x2;
        }
            void set_y(){
            cout<<"enter the value of y ";
            cin>>this->y2;
        }
        float get_x(){
            return this->x1;
        }
        float get_y(){
            return this->y1;
        }
        void display(){
            cout<<"ending co ordinates ";
            cout<<endl<<"x:"<<this->x2<<endl<<"y:"<<this->y2<<endl;
        }
};
class line:public point{
public:
void cal(){
    cout<<endl<<sqrt((this->x2-this->x1)*2+(this->y2-this->y1)*2);
}
};
int main(){
line l1;
cout<<"enter ending co ordinates ";
l1.set_x();
l1.set_y();
l1.cal();
line l2;
cout<<endl<<"enter ending co ordinates "<<endl;
l2.set_x();
l2.set_y();
l2.cal();



}
