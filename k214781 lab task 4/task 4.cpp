#include<iostream>
using namespace std;
class foodpanda{
    string email;
    int choice;
    float cost;
    int s;
    int i;
    public:
        foodpanda(string e){
        email=e;
       
        }
        foodpanda(int ch){
             choice=ch;
           if(this->choice==1){
             cout<<"enter the number of seats";
               cin>>s;           }
               else if(this->choice==2){
               cout<<"enter the number of item you want to order ";
               cin>>this->i;
           }
        
       
             if(this->choice==1){
                this->cost=this->s*100;
                cout<<endl<<"cost per seat is 100$";
                 cout<<"total cost is "<<this->cost;
             } else if(this->choice==2){
                 this->cost=this->i*50;
                  cout<<"cost per item of food is 50$ "<<endl;
                  cout<<"total cost is " << this->cost;
             }
        }
};
int main(){
    string e;
    int c;
    cout<<"enter the email "<<endl;
    cin>>e;
    foodpanda f(e);
    cout<<"enter the choice "<<endl<<"1.Booking a seat "<<endl<<"2.ordering food"<<endl;
    cin>>c;

    foodpanda l(c);
    
    
}
