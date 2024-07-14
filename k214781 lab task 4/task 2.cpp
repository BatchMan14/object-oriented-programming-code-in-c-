#include<iostream>
using namespace std;
class RectShape{
    int length;
    int  breadth;
    public:
     RectShape(){
     length=0;
     breadth=0;
     }
     RectShape(int i,int j){
     length=i;
     breadth=j;
     }
     RectShape(int i){
         length=i;
        cout<<"enter braedth ";
        cin>>this->breadth;

     }
    void area(){
    
         cout<<"the area of the rectangle is "<<length*breadth<<endl;
     }
};
int main(){
    int l,b;
    cout<<"enter the length of the rectangle ";
    cin>>l;
    cout<<"enter the breadth of the rectangle ";
    cin>>b;
    RectShape r(l,b);
    r.area();
}
