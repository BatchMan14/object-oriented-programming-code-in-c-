#include <iostream>
using namespace std;
class bank{
    float a,t,r;
    static float i;
    static string n;
public:
    void set_n(string name){
        n=name;
    }
    static string get_n(){
        cout<<"name of the bank is ";
        return n;
    }
   void cal(float pa,float rate,float time){
        time=t;
        rate=r;
        a=pa;
        i=(a*t*r)/100;
    }
    static float get_i(){
        cout<<"interest rate is";
        return i;
    }
};

int main(){
    string n;
    cout<<"hello"<<endl;
    int c=0;
    int i=0;
    while(c==2){
        float a,t,r;
        cout<<"enter bank name "<<endl;
        cin>>n;
        cout << "enter principal amount:"<<endl;
        cin>>a;
        cout<<"enter rate:"<<endl;
        cin>>r;
        cout<<"enter time:"<<endl;
        cin>>t;
        bank b[i];
        b[i].cal(a, r, t);
        b[i].set_n(n);
        i++;
        cout<<"if you want to continue "<<endl<<"1:yes"<<endl<<"2:no"<<endl;
        }
    for(int j=0;j<i;j++){
        bank b[j];
        b[j].get_n();
        b[j].get_i();
    }
}
