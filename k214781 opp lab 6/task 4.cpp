#include<iostream>
using namespace std;
class Number{
    int num;
    public:
        void get_n(int n){
        num=n;
    }
        int return_n(){
        return num;
    }
};
class SquareOfNumber : public Number{
    public:
        void sqaure(int n){
            cout<<"square of the number is: "<<n*n<<endl;
        }
};
class CubeOfNumber : public Number{
    public:
        void cube(int n){
        cout<<"cube of the number is: "<<n*n*n<<endl;
        }
};
int main(){
    Number N;
    int n;
    SquareOfNumber S;
    CubeOfNumber C;
    cout<<"Enter  number to calculate its square and cube  "<<endl;
    cin>>n;
    S.get_n(n);
    S.return_n();
    S.sqaure(n);
    cout<<endl;
    C.get_n(n);
    C.return_n();
    C.cube(n);
}
