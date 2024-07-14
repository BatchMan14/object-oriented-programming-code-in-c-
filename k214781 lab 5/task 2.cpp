#include<iostream>
using namespace std;
static int l=5;
static int b=3;
static int h=2;
static int r=8;
static float pi=3.142;
class rectangle{
public:
rectangle(){
cout<< l<<endl;
cout<< b<<endl;
cout<<l*b<<endl;
}
 void area(){
  int area=l*b;
  cout<<"area:";
 
 }
 
};
class square{
public:
square(){
cout<< l<<endl;
cout<<4*l<<endl;
}
void area_sq(){
int area=4*l;
cout<<"area:";
}

};
class triangle{
public:
triangle(){
cout<<h<<endl;
cout<< b<<endl;
cout<<1/2*h*b;
}
 void area_tri(){
  int area=1/2*h*b;
  cout<<"area:";
 }
};
class circle{
public:
circle(){
cout<< r<<endl;
cout<< pi<<endl;
cout<<pi*r*r<<endl;
}
void area_cir(){
int area=pi*r*r;
cout<<"area:";
}
};
int main(){
rectangle rec;
rec.area();
square sq;
sq.area_sq();
triangle tri;
tri.area_tri();
circle cir;
cir.area_cir();
}
