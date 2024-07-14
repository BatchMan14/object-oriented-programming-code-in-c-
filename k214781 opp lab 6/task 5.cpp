#include<iostream>
using namespace std;
class Employee{
    public:
    string name;
    int ID;
    };
class HourlyEmployee : public Employee{
    private:
        int hi;
        public:
        HourlyEmployee(string n,int i,int h){
            name=n;
            ID=i;
            hi=h;
        }
        void calculate_hourly_income(int hr){
            hi=hr*150;
            cout<<"The salary of an hourly employee:  "<<hi;
        }
};
class PermanentEmployee : public Employee{
    private:
        int hi;
        public:
        PermanentEmployee(string n,int i,int h){
        name=n;
        ID=i;
        hi=h;
        }
        void calculate_income(){
            cout<<"The salary of a permanent employee: "<<240*150;
        }
};
int main(){
    string Name;
    int ID;
    int hours;
    char opt;
    cout<<"Enter the name of the employee: ";
    cin>>Name;
    cout<<"Enter the employee ID: ";
    cin>>ID;
    HourlyEmployee HE(Name,ID,150);
    PermanentEmployee PE(Name,ID,150);
    cout<<"Is the employee an hourly(H)) or a permanent(P) employee? ";
    cin>>opt;
    if(opt=='H'){
        cout<<"Enter the number of hours : ";
        cin>>hours;
        HE.calculate_hourly_income(hours);
    }
    else if(opt=='P'){
        PE.calculate_income();
    }
}
