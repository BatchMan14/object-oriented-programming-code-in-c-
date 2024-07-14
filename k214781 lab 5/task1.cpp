#include<iostream>
#include<string>
using namespace std;

class employee{
    int employee_code;
    string employee_name;
    int Date_of_joining;
    static int date;
    
    public:
        employee(){
        }
        employee(int c,int d,string n){
            this->Date_of_joining=d;
            this->employee_code=c;
            this->employee_name=n;
        }
        void set_code(int c){
            this->employee_code=c;
        }
        void set_name(string n){
            this->employee_name=n;
        }
        void set_date(int d){
            this->Date_of_joining=d;
        }
        int get_date(){
            return Date_of_joining;
        }
        
};

int main()
{
int c,d,co=0,cu,date;
string n;
employee e[4];
    for(int i=0;i<4;i++){
    cout<<"Please enter your name:";
    cin>>n;
    cout<<"Please enter your id:";
    cin>>c;
    cout<<"please enter your year  of joining:";
    cin>>d;
        e[i]=employee(c,d,n);
    }
    cout<<"enter current year ";
    cin>> cu;
    for(int i=0;i<4;i++){
        date=cu-e[i].get_date();
        if(date>3){
            co++;
        }
    }

cout<<"total number of employees who have been with us for more than 3 years are  "<<co;
}
