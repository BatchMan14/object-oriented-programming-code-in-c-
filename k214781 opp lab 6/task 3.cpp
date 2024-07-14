#include <iostream>
using namespace std;
class Marks{
    int roll_no;
    string name;
    float marks;
public:
    void set_roll_no(int r){
        this->roll_no=r;
    }
    void set_name(string n){
        this->name=n;
    }
    void set_marks(float m){
        this->marks=m;
    }

};
class physics:public Marks{
    
};
class chemistry:public Marks{
    
};
class math:public Marks{
    
};

int main(){
    int n;
    cout<<"enter the number of "
}
