
//Write a C++ program where an array is given as input to a function along with it’s size
//and an integer n. You job is to make the function work in a manner which will cyclically
//shift the indexes of the array to right, each element needs to be moved to the right as
//per the value indicated by n while the remaining n elements are moved to the
//beginning of the array.
#include<iostream>
using namespace std;
  void seq(int arr[],int n){
      int seq,s[n],c=0;
      cout<<"enter the sequence ";
      cin>>seq;
      for(int i=seq;i<n;i++){
          s[i]=arr[c];
          c=c+1;
      }
    for(int i=0;i<seq;i++){
          s[i]=arr[c];
          c=c+1;
      }
    for(int i=0;i<n;i++){
        arr[i]=s[i];
    }
    
    cout<<" the new sequence is "<<endl;
    for(int i=0;i<n;i++){
    cout<<arr[i]<<endl;
    }
  }
int main(){
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cout<<"enter the number  ";
        cin>>arr[i];
        }
    seq(arr,n);
}
