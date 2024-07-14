//Write a C++ program that includes a Boolean function which consists of a single
//parameter of type integer, as a Boolean function, the function is only permitted to
//return either “True” or “False”. It must return true if the integer is a prime number existing
//between 1 and 1000 (Note to ponder: 1 is not always counted as a prime number).
//The function must keep repeating till the user wants it to.
#include <iostream>
using namespace std;

int main(){
    

 
int num;
bool chk_prime = true;


cout<<"Enter the number :"<<endl;
cin>>num;
if(num==0 || num == 1)
{
    chk_prime=false;
}
for (int i=2; i<=num/2; i++)
{
    if (num%i==0){
        chk_prime=false;
        }
}
if(chk_prime){
    cout<< "It is a prime number.";
}
    else {
        cout<<num<<" number is not a prime.";
    }
}
