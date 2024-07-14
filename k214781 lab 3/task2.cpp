#include<iostream>
using namespace std;
class company_worker{
    private:
        int workperday;
        float salary;
    public:
        void info_retreival(int w, float s){
            this->salary=s;
            this->workperday=w;
        }
        void sallincrease(){
            if(this->salary<25000){
                this->salary=salary+5000;
            }
        }
        void workbenefit(){
            if(this->workperday>7){
                this->salary=salary+6000;
            }
        }
        void get_data(){
            cout<<"total salary is "<<this->salary<<endl<<"total hour of work per day is"<<this->workperday<<endl;
        }
};
int main(){
company_worker c;
    int w,s;
    cout<<"enter the salary ";
    cin>>s;
    cout<<"enter work per hour ";
    cin>>w;
    c.info_retreival(w,s);
    c.sallincrease();
    c.workbenefit();
    c.get_data();
}
