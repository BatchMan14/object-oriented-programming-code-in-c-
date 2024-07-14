#include<iostream>
using namespace std;
class mymath{
    int n1,n2,n3,n4;
    float s;
    public:
    float add(int m1,int m2){
        this->n1=m1;
        this->n2=m2;
        this->s=this->n1+this->n2;
        return s;
    }
    float add(int m1,int m2, int m3){
        this->n1=m1;
        this->n2=m2;
        this->n3=m3;
        this->s=this->n1+this->n2+this->n3;
        return s;
    }
    float add(int m1,int m2, int m3,int m4){
        this->n1=m1;
        this->n2=m2;
        this->n3=m3;
        this->n4=m4;
        this->s=this->n1+this->n2+this->n3+this->n4;
        return s;
    }
    float sub(int m1,int m2){
        this->n1=m1;
        this->n2=m2;
        this->s=this->n1-this->n2;
        return s;
    }
    float sub(int m1,int m2, int m3){
        this->n1=m1;
        this->n2=m2;
        this->n3=m3;
        this->s=this->n1-this->n2-this->n3;
        return s;
    }
    float sub(int m1,int m2, int m3,int m4){
        this->n1=m1;
        this->n2=m2;
        this->n3=m3;
        this->n4=m4;
        this->s=this->n1-this->n2-this->n3-this->n4;
        return s;
    }
    float mul(int m1,int m2){
        this->n1=m1;
        this->n2=m2;
        this->s=this->n1*this->n2;
        return s;
    }
    float mul(int m1,int m2, int m3){
        this->n1=m1;
        this->n2=m2;
        this->n3=m3;
        this->s=this->n1*this->n2*this->n3;
        return s;
    }
    float mul(int m1,int m2, int m3,int m4){
        this->n1=m1;
        this->n2=m2;
        this->n3=m3;
        this->n4=m4;
        this->s=this->n1*this->n2*this->n3*this->n4;
        return s;
    }
    float div(int m1,int m2){
        this->n1=m1;
        this->n2=m2;
        return this->s=this->n1/this->n2;
    }
    float div(int m1,int m2, int m3){
        this->n1=m1;
        this->n2=m2;
        this->n3=m3;
        return this->s=this->n1/this->n2/this->n3;
    }
    float div(int m1,int m2, int m3,int m4){
        this->n1=m1;
        this->n2=m2;
        this->n3=m3;
        this->n4=m4;
        return this->s=this->n1/this->n2/this->n3/this->n4;
    }
    float display(){
        return s;
    }
    
    
};
int main(){
    int i,m1,n[4];
    mymath m;
    cout<<"choose the operation you want to perform "<<endl;
    cout<<"1:add"<<endl<<"2:sub"<<endl<<"3:mul"<<endl<<"4:div"<<endl;
    cin>>i;
    switch (i){
        case 1:{
            cout<<endl<<"enter the number of operands "<<endl;
            cin>>m1;
            if(m1==2){
                for(int j=0;j < m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.add(n[0],n[1]);
                cout<<endl<<"result is "<<m.display();
            }else if(m1==3){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.add(n[0],n[1],n[2]);
                cout<<endl<<"result is "<<m.display();
                
            }else if(m1==4){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.add(n[0],n[1],n[2],n[3]);
                cout<<endl<<"result is "<<m.display();
                
            }
            break;
        }
        case 2: {
            cout<<endl<<"enter the number of operands "<<endl;
            cin>>m1;
            if(m1==2){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.sub(n[0],n[1]);
                cout<<endl<<"result is "<<m.display();
            }else if(m1==3){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.sub(n[0],n[1],n[2]);
                cout<<endl<<"result is "<<m.display();
                
            }else if(m1==4){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.sub(n[0],n[1],n[2],n[3]);
                cout<<endl<<"result is "<<m.display();
                
            }
            break;
        }
        case 3:{
            cout<<endl<<"enter the number of operands "<<endl;
            cin>>m1;
            if(m1==2){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.mul(n[0],n[1]);
                cout<<endl<<"result is "<<m.display();
            }else if(m1==3){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.mul(n[0],n[1],n[2]);
                cout<<endl<<"result is "<<m.display();
                
            }else if(m1==4){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                m.mul(n[0],n[1],n[2],n[3]);
                cout<<endl<<"result is "<<m.display();
                
            }
            break;
        }
        case 4:{
            cout<<endl<<"enter the number of operands "<<endl;
            cin>>m1;
            if(m1==2){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                cout<<endl<<"result is "<<m.div(n[0],n[1]);
            }else if(m1==3){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                cout<<endl<<"result is "<<    m.div(n[0],n[1],n[2]);
                
            }else if(m1==4){
                for(int j=0;j<m1;j++){
                    cout<<"enter the number n"<<j<<endl;
                    cin>>n[j];
                }
                cout<<endl<<"result is "<<m.div(n[0],n[1],n[2],n[3]);
                
            }
            break;
        }
    }
}
