//Create a class named “PhoneNumbers”, the class should contain the following attributes:
//1) STD
//2) Number
//You need to accept a valid number from at least 6 users and then rephrase the input
//number to a new changed number based on the following conditions:
//1) The STD code should be added by 1 digit (Ex: 7 becomes 8)
//2) Next you should reverse the first two digits of the numbers. (Ex: 823-38-985334 ? 932-
//38-985334)
//Print the changed numbers.
#include<iostream>
using namespace std;
class phone_numbers{
private:
    int std,number;
public:
    void set_data(int s, int n){
        this->std=s;
        this->number=n;
    }
    void get_data(){
        cout<<"number is "<<this->number;
    }
};
int main(){
    int num,std;
    cout<<"please enter the number ";
    cin>>num;
    std=num%10;
    cout<<endl<<std;
}
