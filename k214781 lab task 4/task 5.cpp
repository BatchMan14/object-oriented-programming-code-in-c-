#include<iostream>
using namespace std;
class cal{
    

int sum(int m,int n[m]){
    int s=0;
    for(int i=0;i<m;i++){
        s=s+n[m];
    }
    return s;
}
int sum(int m,int n[m],char c ){
    int s=0;
    if(c=='o'){
        for(int i=1;i<m;i=i+2){
            s=s+n[m];
        }
        cout<<"the sum of the odd numbers are ";
    }else if(c=='e'){
        for(int i=0;i<m;i=i+2){
            s=s+n[m];
        }
        cout<<"the sum of the even numbers are ";
    }else{ s=0;
    }
    return s;
}
};
int main(){
    int s,j,n,m[n];
    char c;
    cal ca;
    cout<<"enter the size of array ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"please enter the number ";
        cin>>m[i];
    }
    cout<<"do u want sum of odd or even numbers"<<endl<<"1. yes"<<endl<<"2.no"<<endl;
    cin>>j;
    if(j==1){
        ca.sum(m,  n[m], c);
        cout<<s;
    }else{
        ca.sum(m, n[m]);
        cout<<"the sum is "<<s;
    }

    
}
