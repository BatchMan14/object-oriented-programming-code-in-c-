#include <iostream>
using namespace std;
class math{
    float f;
public:
    math(float fr){
        f=fr;
    }
    friend float operator*( math &obj1,math &obj2);
};
    float operator*( math &obj1,math &obj2){
        float f;
        return obj1.f*obj2.f;
    }
int main(){
    float f1,f2,f3,n1,n2,d1,d2;
    cout<<"enter the first numerator "<<endl;
    cin>>n1;
    cout<<"enter the first denominator "<<endl;
    cin>>d1;
    cout<<"enter the second numerator "<<endl;
    cin>>n2;
    cout<<"enter the second denominator "<<endl;
    cin>>d2;
    f1=n1/d1;
    f2=n2/d2;
    math m1(f1);
    math m2(f2);
    f3=m1*m2;
    cout<<"answer :"<<f3;
}
