#include<iostream>
using namespace std;
class shape{
public:
    float area(float a){
        return a*a;
    }
    float area(float w,float h){
        return w*h;
    }
};
int main(){
    int c;
    shape s;
    float w,h,a;
    cout<<"enter the shape whose area you want to find "<<endl<<"1:square"<<endl<<"2:rectangle"<<endl;
    cin>>c;
    if(c==1){
        cout<<"enter the height "<<endl;
        cin>>h;
        cout<<"enter the width"<<endl;
        cin>>w;
        cout<<"area of rectangle is"<<s.area(w, h);
    }else if(c==2){
        cout<<"enter the value of one side "<<endl;
        cin>>a;
        cout<<"area of square is"<<s.area(a);
    }
}
