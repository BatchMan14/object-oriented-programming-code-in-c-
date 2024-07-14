#include<iostream>
using namespace std;
class animal{
protected:
    string name;
public:
    void foundin(){
        cout<<"An animal can be found in many places "<<endl;
    }
    void set_name(string n){
        name=n;
    }
    string get_name(){
        return this->name;
    }
};
class mammal:virtual public animal{
public:
    void foundin(){
        cout<<"A mammal can be found in water or on land"<<endl;
    }
};
class marine_animal:virtual public animal{
public:
    void foundin(){
        cout<<"A marine animal can only be found in bodies of water"<<endl;
    }
};
class whales:public mammal,public marine_animal{
    string whale_type;
public:
    whales(string t,string n){
        set_name(n);
        whale_type=t;
    }
    void foundin(){
        cout<<whale_type<<name<<"can only be found in the ocean."<<endl;
    }
};
int main(){
    whales w("baleen","whale");
}
