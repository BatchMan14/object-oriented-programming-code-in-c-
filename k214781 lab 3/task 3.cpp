#include<iostream>
using namespace std;
class customer_account{
    string name;
    int accountnum;
    int account_type;
    float balance;
    public:
    void default_values(string n,int a,int b,float ba){
        this->name=n;
        this->accountnum=a;
        this->account_type=b;
        this->balance=ba;
}
    void initial_amount(float a){
        this->balance=balance+a;
    }
    void withdrawl(float a){
        if(a>this->balance){
            cout<<"error you dont have this much amount in your account "<<endl;

        }else if (a>25000){
            cout<<"you cannot withdrawl amount more than 25000 "<<endl;
        }else{
            this->balance=balance-a;
        }
    }
    void get_data(){
        cout<<endl<<"name="<<this->name<<endl<<"account balance= "<<this->balance;
    }
};
int main(){
    string n;int a;int b;float ba;
    cout<<"enter your name ";
    cin>>n;
    cout<<"enter the account number ";
    cin>>a;
    if(a>9999){
        cout<<"error enter again ";
        cout<<"enter the account number ";
        cin>>a;
    }
    cout<<"choose between enter "<<endl<<"1. for saving "<<endl<<"2. for current"<<endl;
    cin>>b;
    cout<<"enter opening balance "<<endl;
    cin>>ba;
    if(ba<5000){
        cout<<"amount should be greator than 5000 to open account "<<endl;
            cout<<"enter opening balance "<<endl;
            cin>>ba;
    }
    customer_account ca;
    ca.default_values(n,a,b,ba);
    float  am;
    int i;
    cout<<"if you want to deposit more amount press 1 ";
    cin>>i;
    if(i==1){
    
    cin>>am;
    ca.initial_amount(am);
}
    cout<<"enter the amount u want to withdrawl ";
    cin>>i;
    if(i==1){
    
    cin>>am;
    ca.withdrawl(am);
    }ca.get_data();

}
