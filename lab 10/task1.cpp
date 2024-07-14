#include<iostream>
using namespace std;
class shape{
    protected:
        float a,b,c;
public:
    shape(){
        
    }
    virtual void get_perimeter()=0;

};
class rectangle:public shape{
    
public:
void get_perimeter(){
    cout<<"enter the length of rectangle "<<endl;
    cin>>a;
    cout<<"enter the width of rectangle "<<endl;
    cin>>b;
    cout<<"perimeter of rectangle is "<<2*(a+b);
}

};
class triangle :public shape{
public:

void get_perimeter(){
    cout<<"enter the side 1 of triangle "<<endl;
    cin>>a;
    cout<<"enter the base of ttiangle "<<endl;
    cin>>b;
    cout<<"enter the side 2 of ttiangle "<<endl;
    cin>>c;
    cout<<"perimeter of rectangle is "<<a+b+c;
}
};
int main()
{
    int c;
    cout<<"which perimeter you want to find out "<<endl<<"1:rectangle"<<endl<<"2:triangle"<<endl;
    cin>>c;
    if(c==1){
        rectangle r;
        r.get_perimeter();
    }else if(c==2){
        triangle t;
        t.get_perimeter();
    }
}
