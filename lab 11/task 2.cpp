#include <iostream>
using namespace std;
class employee{
protected:
    string name;
    string code;
};
class consultant:virtual public employee{
protected:
    int year_of_experience;
    
};
class manager:virtual public employee{
protected:
    int no_of_teams;
};
class consultant_manager:public manager,public consultant{
public:
    consultant_manager(string n,string c,int yoe,int nt){
        name=n;
        code=c;
        year_of_experience=yoe;
        no_of_teams=nt;
    }
    void display(){
        cout<<name<<" "<<code<<" "<<year_of_experience<<" "<<no_of_teams<<" ";
    }
};
int main(){
    consultant_manager c("ali","s-123",17,5);
    c.display();
    return 0;
}
