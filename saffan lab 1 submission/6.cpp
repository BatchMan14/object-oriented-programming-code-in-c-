//Write a C++ program that finds the frequency of the letter “a” entered in a string.
//Example: Today is a great day!
//Frequency of “a” in the string is: 4
#include<iostream>
using namespace std;
int main(){
    int count=0;
    string m;
    cout<<"enter the message ";
    cin>>m;
    for(int i=0;i<sizeof(m);i++){
        if('a'==m[i]){
            count=count+1;
        }
    }
    cout<<"frequency of a is "<<count<<endl;
}
