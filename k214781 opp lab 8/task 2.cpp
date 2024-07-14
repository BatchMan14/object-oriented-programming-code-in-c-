#include<iostream>
using namespace std;
class arraytwo;
class arraythree;
class arrayone{
    int array[3];
    public:
        
        void set(){
            for(int i=0;i<5;i++){
                cout<<"enter value ";
                cin>>array[i];
            }
        }
        friend void add(arrayone &obj1,arraytwo &obj2, arraythree &obj3);
};
class arraytwo{
    int array[5];
    public:
        void set(){
            for(int i=0;i<5;i++){
                cout<<"enter value ";
                cin>>array[i];
            }
        }
        friend void add(arrayone &obj1,arraytwo &obj2, arraythree &obj3);
};
class arraythree{
    int array[5];
    public:

        friend void add(arrayone &obj1,arraytwo &obj2, arraythree &obj3);
    
    void get(){
            for(int i=0;i<5;i++){
                cout<<endl<<"value"<<i<<"is:"<<array[i]<<endl;
            }
        }
};

void add(arrayone &obj1,arraytwo &obj2, arraythree &obj3){
    for(int i=0;i<5;i++){
    
    obj3.array[i]=obj1.array[i]+obj2.array[i];
}
}
int main(){
    arrayone obj1;
    arraytwo obj2;
    arraythree obj3;
    obj1.set();
    obj2.set();
    add(obj1,obj2,obj3);
    obj3.get();
}
