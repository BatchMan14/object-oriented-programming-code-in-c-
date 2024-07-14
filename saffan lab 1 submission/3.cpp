//Write a C++ program that swaps the value of two variables using pointers.
#include <iostream>
using namespace std;
int main(){
    int n1,n2,*n3,*n4,*n5;
    cout<<"enter first number"<<endl;
    cin>>n1;
    cout<<"enter second number"<<endl;
    cin>>n2;
    n3=&n1;
    n4=&n2;
    n5=n3;
    n3=n4;
    n4=n5;
    cout<<"the first number is"<<*n3<<endl;
    cout<<"the second number is"<<*n4<<endl;
    }

