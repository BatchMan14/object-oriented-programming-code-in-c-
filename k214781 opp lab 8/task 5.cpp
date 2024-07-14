#include<iostream>
using namespace std;
class time{
    int hour ,min,sec;
public:
    time(int h,int m,int s ){
        this->hour=h;
        this->min=m;
        this->sec=s;
    }
    friend void operator ==(  time &obj1,  time &obj2);
    friend void operator >>( time &obj1, time &obj2);
    friend void operator <<( time &obj1, time &obj2);
};
void operator ==(  class time &obj1, class time &obj2){
    if((obj1.hour==obj2.hour)&&(obj1.min==obj2.min)&&(obj1.sec==obj2.sec)){
        cout<<endl<<"both time are same"<<endl;
    }else
        cout<<endl<<"both times are different "<<endl;
}
void operator >>(  class time &obj1, class time &obj2){
    if((obj1.hour!=obj2.hour)&&(obj1.min!=obj2.min)&&(obj1.sec!=obj2.sec)){
        cout<<endl<<"time accepted"<<endl;
    }else
        cout<<endl<<"time not accepted "<<endl;
}
void operator <<( class time &obj1,class time &obj2){
    cout<<endl<<"first time"<<endl;
    cout<<"hour:"<<obj1.hour<<endl<<"minutes:"<<obj1.min<<endl<<"seconds:"<<obj1.sec<<endl;
    cout<<endl<<"second time"<<endl;
    cout<<"hour:"<<obj2.hour<<endl<<"minutes:"<<obj2.min<<endl<<"seconds:"<<obj2.sec<<endl;
}
int main(){
    int hour ,min,sec;
    cout<<"enter first time"<<endl;
    cout<<"hour:";
    cin>>hour;
    cout<<endl<<"minutes:";
    cin>>min;
    cout<<endl<<"seconds:";
    cin>>sec;
    class time t1(hour ,min,sec);
    hour=0;min=0;sec=0;
    cout<<"enter second time"<<endl;
    cout<<"hour:";
    cin>>hour;
    cout<<endl<<"minutes:";
    cin>>min;
    cout<<endl<<"seconds:";
    cin>>sec;
    class time t2(hour ,min,sec);
    t1==t2;
    t1>>t2;
    t1<<t2;
}
