//Write a C++ program to create a structure which stores the names, salary and hours of
//work per day of 10 employees in a company. Write a program to increase the salary
//depending on the number of hours of work per day as follows and then print the name
//of all the employees along with their final salaries.
//Hours of work per day 5 7 >=9
//Increase in salary 3500 7000 9000
#include <iostream>
using namespace std;
struct bio{
    string name;
    double salary;
    float  wpd;
};
int main(){
    bio d[10];
    for(int i=0;i<10;i++){
    cout<<"enter your name:";
    cin>>d[i].name;
    cout<<"enter your salary";
        cin>>d[i].salary;
    cout<<"enter your hours of work per day";
    cin>>d[i].wpd;
    }
    for(int i=0;i<10;i++){
        if(d[i].wpd>=5&&d[i].wpd<7){
            d[i].salary=d[i].salary+3500;
        }
        if(d[i].wpd>=7&&d[i].wpd<9){
            d[i].salary=d[i].salary+7000;
        }
        if(d[i].wpd>=9){
            d[i].salary=d[i].salary+9000;
        }
    }
    for(int i=0;i<10;i++){
        cout<<d[i].name<<" salary is "<<d[i].salary;
    }
}
