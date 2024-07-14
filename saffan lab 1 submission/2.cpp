#include<iostream>
using namespace std;
int main(){
	int n1,n2,*n3,*n4;
	cout<<"enter first number"<<endl;
	cin>>n1;
	n3=&n1;
	cout<<"enter your name"<<endl;
	cin>>n2;
	n4=&n2;
	if(*n3<*n4){
		cout<<"highest number is"<<*n4<<endl;
		cout<<"lowest number is"<<*n3<<endl;
	}else 
	{cout<<"highest number is"<<*n3<<endl;
		cout<<"lowest number is"<<*n4<<endl;
	}
}
