#include <iostream>
using namespace std;
//Write a C++ program to input the marks of Chemistry, Mathematics and
//Physics (each out of 100) for atleast 4 students. Now you must use a structure named
//struct_Marks having variables name, roll no., marks_chem, marks_maths and marks_phy
//and then display the percentage of each student.
 struct marks{
    int marks_chem;
    int marks_phy;
    int marks_maths;
    int rollno;
};
int main(){
    int n=0;
    int total=0;
    float p;
        cout<<"enter number of students ";
        cin>>n;
    if(n<4){
        cout<<"enter number of students ";
        cin>>n;

    }
     marks m[n];
    for(int i=0;i<n;i++){
        cout<<"enter your rollno ";
        cin>>m[i].rollno;
        cout<<"enter physics marks ";
        cin>>m[i].marks_phy;
        if(m[i].marks_phy>100){
            cout<<"enter physics marks ";
            cin>>m[i].marks_phy;
        }
        cout<<"enter chemistry marks ";
        cin>>m[i].marks_chem;
        if(m[i].marks_chem>100){
            cout<<"enter chemistry marks ";
            cin>>m[i].marks_chem;
        }
        cout<<"enter maths marks ";
        cin>>m[i].marks_maths;
        if(m[i].marks_maths>100){
            cout<<"enter maths marks ";
            cin>>m[i].marks_maths;
        }
        
    }
    for(int i=0;i<n;i++){
        total=m[i].marks_maths+m[i].marks_phy+m[i].marks_chem;
        cout<<"total"<<endl;
        
    }
     for(int i=0;i<n;i++){
    p=(total/300)*100;
        cout<<"Percentage of "<<m[i].rollno<<" is "<<p<<endl;
    }
}
