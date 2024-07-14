//Write a C++ program that creates a function which returns the count of duplicate
//elements in an array.
#include <iostream>
#include<string.h>
using namespace std;
int count(string c){
    int co=0,k=0,j=sizeof(c);
    for(int i=0;i<j;i++){
    	if(c[i]==c[j-k]){
    	co=co+1;	
		}
		k=k+1;
	}
   return co;
}
int main(){
    string n;
    int j,z;
    cout<<"enter the sentence ";
    cin>>n;
    z=count(n);
    cout<<"total counts of duplicate element are "<<z;
}
