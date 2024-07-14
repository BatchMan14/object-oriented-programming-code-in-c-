//Create a class named “ElectricBillCal”, this class represents an electric company that
//charges it’s consumers as per the following rates:
//1) From unit 1 to 100, 5 PKR per unit
//2) From unit 101 to 200, 7 PKR per unit
//3) From unit 201 to 300, 9 PKR per unit
//4) Anything above 300 11 PKR per unit
//
//If the consumer uses as much units as his/her total bill exceeds 5000 PKR then an
//additional 13.5% duty must be charged.
//You must create appropriate functions that notes and prints the names of the consumers,
//the units consumed by them and the overall cost incurred.
#include<iostream>
using namespace std;
class ElectricBillCal{
private:
    string name;
    int unit;
    float overall_cost;
public:
    void set_data(int u,string n){
        this->unit=u;
        this->name=n;
    }
    void cal_bill(){
        float tax;
        if(this->unit >= 1 && this->unit <= 100 ){
            this->overall_cost=unit*5;
        }else if(this->unit >= 101 && this->unit <= 200){
            this->overall_cost=unit*7;
        }else if(this->unit >= 301 && this->unit <= 400){
            this->overall_cost= unit*9;
        }else if(this->unit >300){
            this->overall_cost= unit*11;
            
        }
                 if(this->overall_cost > 5000){
            tax=(overall_cost*13.5)/100;
            overall_cost=overall_cost+tax;
    }
                
        }
                 void get_data(){
            cout<<"the name of the consumer is "<<this->name<<endl<<"total units consumed are "<<this->unit<<endl<<"overall cost incurred is "<<this->overall_cost<<endl;
        }
};
int main(){
            ElectricBillCal e;
            int u;
            string n;
            cout<<"enter your name "<<endl;
            cin>>n;
            cout<<"enter number of units used "<<endl;
            cin>>u;
            e.set_data(u,n);
            e.cal_bill();
            e.get_data();
        }
