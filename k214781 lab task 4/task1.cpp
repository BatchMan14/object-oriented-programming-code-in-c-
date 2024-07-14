//Create a C++ program to ask for a student’s ID, Name and Semester. The default values
//of the student must be 0, “NaN” and 0 respectively. Ask for all the values atleast from 5
//students and display all of them.
#include<iostream>
using namespace std;
class student{
    int id;
    string name;
    int semister;
    public:
        student(){
            id=0;
            name="NAN";
            semister=0;
        }
        student(int i,string n,int s){
            this->id=i;
            this->name=n;
            this->semister=s;
        }
    void display(){
        cout<<"name:"<<name<<endl<<"id:"<<id<<endl<<"semister:"<<semister;
    }

};
int main(){
    int id,st;
    string n;
    for(int i=0;i<5;i++){
        cout<<endl<<"please enter your name "<<endl;
        cin>>n;
        cout<<"please enter your id "<<endl;
        cin>>id;
        cout<<"please enter your semister "<<endl;
        cin>>st;
        student s(id,n,st);
        s.display();
        
       
    }
}

