#include<iostream>
using namespace std;
class tollcars{
    unsigned int no_of_automobiles;
    double over_all_money_collected;
public:
    tollcars(){
        over_all_money_collected=0;
        no_of_automobiles=0;
    }
    tollcars(double n){
        over_all_money_collected=n;
        no_of_automobiles=no_of_automobiles+1;
    }
    tollcars(int i){
        this->no_of_automobiles=this->no_of_automobiles+1;
    }
    void display(){
        cout<<"total number of cars are "<<this->no_of_automobiles<<endl<<"total number of money collected is "<<this->over_all_money_collected;
    }
};
int main(){
    char c,k;
    tollcars d;
    cout<<"if you are paying then press c otherwise press any key ";
    cin>>c;
    if(c=='c'){
        tollcars c(0.5);
    }else
        tollcars d(1);
    cout<<"enter the ecs key to dispaly the result and terminate the program";
    k = _getch();
        
        if (k==27){
        d.display();
    }
}

