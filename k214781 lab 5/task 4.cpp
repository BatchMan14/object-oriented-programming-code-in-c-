#include<iostream>
using namespace std;
class le_cream{
    int no_of_scope;
    int total=0;
    int flavor;
    int waf;
public:
    void get_data(){
        cout<<"Welcome to le cream what flavor of icecream would you like to order "<<endl;
        cout<<"1:choclate"<<endl<<"2:vanilla"<<endl<<"3:strawberry"<<endl<<"4:mango"<<endl;
        cin>>this->flavor;
    }
    void cal(){
        int i=0;
        do{
            cout<<"choose how many scopes u want "<<endl;
            cin>>this->no_of_scope;
            if(this->no_of_scope>=3||this->no_of_scope<=2){
                i=i+1;
            }
        }while(i==0);
        if(this->no_of_scope==3){
            this->total=this->total+150;
        }else if(this->no_of_scope==3){
            this->total=this->total+100;
        }
        cout<<"do you want vanilla wafer with your ice cream "<<endl<<"1.yes "<<endl<<"2.no"<<endl;
        cin>>waf;
        if(waf==1){
            this->total=this->total+10;
        }
        
        }
    void menu(){
        cout<<"Final amount to be paid is:"<<this->total<<endl<<" flavor:vanilla"<<endl<<"number of scoops:"<<this->no_of_scope<<endl;

    }
};
int main(){
    le_cream c;
    c.get_data();
    c.cal();
    c.menu();
    
}
    

