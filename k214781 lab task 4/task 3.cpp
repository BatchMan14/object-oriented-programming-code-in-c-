#include <iostream>
using namespace std;
class person{
    int nic;
    public:
        person(int n){
            nic=n;
        cout<<"The person on the registered NIC has been included in the government scheme ";
        }
        
};
int main(){
    int n,i;
    cout<<"enter the choice "<<endl<<"1.enter CNIC number "<<endl<<"2.donot enter cnic number"<<endl;
    cin>>i;
    switch(i){
        case 1:{
                cout<<"enter the CNIC number ";
                cin>>n;
                person p(n);
            break;
        }
        case 2:{
            cout<<"The person does not want the scheme";
            break;
        }
        
    }
}
