//Write a C++ program that creates a function which returns the highest number
//of an array.
#include <iostream>
using namespace std;
int high(int num[n],n){
    int h;
    for(int i=0;i<n;i++){
        if(num[i]>num[i+1]){
            h=num[i]
        }
    }
    return h;
}
int name(){
    int n;
    int h;
    cout<<"enter total count of numbers ";
    cin>>n;
    int num[n];
    for(int i=0;i<n;i++){
        cout<<"enter the number";
        cin>>num[i];
    }
    h=high(num[n],n);
    cout<<"highest number is "<<h<<endl;
}
