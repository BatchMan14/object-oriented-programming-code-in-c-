#include<iostream>
using namespace std;
class person{
protected:
    string name;
    string id;
    float salary;
    string designation;
    
};
class admin:virtual public person{
};
class account:virtual public person{
};
class master:public admin,public account{
    float p=0,bo=0,t=0;
public:
    master(){
        
    }
    master(string n,string i,float s,string d,float b){
        this->name=n;
        this->id=i;
        this->designation=d;
        this->salary=s;
        this->p=b;
    }
    void cal_b(){
        bo=p*salary;
        t=bo+salary;
    }
    int get_t(){
        return  t;
    }
    int get_bo(){
        return bo;
    }
    float get_salary(){
        return salary;
    }
};
int main(){
    int no;
    cout<<"enter the number of employees "<<endl;
    cin>>no;
    for(int j=0;j<no;j++){
        string i,n,d;
        float s,b=10.4;
        cout<<"enter the name of the employee "<<endl;
        cin>>n;
        cout<<"enter the id of the employee "<<endl;
        cin>>i;
        cout<<"enter the salary of the employee "<<endl;
        cin>>s;
        cout<<"enter the  designation of the employee "<<endl;
        cin>>d;
        master m(n,i,s,d,b);
        m.cal_b();
        cout<<"salary:"<<m.get_salary()<<endl<<"bonus:"<<m.get_bo()<<endl<<"total salary:"<<m.get_t();
    }
}
