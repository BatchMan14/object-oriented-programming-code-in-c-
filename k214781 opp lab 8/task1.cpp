#include<iostream>
using namespace std;
class B;
class A{
    int a;
    string n;
    public:
        A(string name, int d){
            a=d;
            n=name;
        }
        void get(){
            cout<<endl<<"name :"<<this->n<<endl<<"number :"<<this->a<<endl;
        }
        friend void swap(A &obj1, B &obj2);
};
class B{
    int b;
    string m;
    public:
            B(string name, int d){
            b=d;
            m=name;
        }
        void get(){
            cout<<endl<<"name :"<<this->m<<endl<<"number :"<<this->b<<endl;
        }
        friend void swap(A &obj1, B &obj2);
        
};
void swap(A &obj1, B &obj2){
    string tn;
    int ta;
    tn=obj1.n;
    obj1.n=obj2.m;
    obj2.m=tn;
    ta=obj1.a;
    obj1.a=obj2.b;
    obj2.b=ta;

}
int main(){
    A obj1("jawad ", 20);
    B obj2("saffan", 21);
    swap(obj1 ,obj2);
    obj1.get();
    obj2.get();
}
