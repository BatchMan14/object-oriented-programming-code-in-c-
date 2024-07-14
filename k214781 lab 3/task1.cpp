//Create a class named “ShapeTriangle”, your job is to print the area and perimeter of
//triangle, consider the triangle to have sides of 3, 4 and 5 units. The value of the area and
//perimeter needs to be printed by using a function
#include<iostream>
#include<math.h>
using namespace std;
class shapetriangle{
    private:
        int A;
        int B;
        int C;
        float perimeter;
        float area;
        public:
            void set_values(int a,int b ,int c){
                this->A=a;
                this->B=b;
                this->C=c;
            }
            float cal(){
                this->perimeter=(this->A+this->B+this->C);
                int s=this->perimeter/2;
                this->area=sqrt(s*(s-A)*(s-B)*(s-C));
            return area;
            }
            void get_aandp(){
                cout<<"the area is "<<this->area<<endl<<"the perimeter is "<<this->perimeter<<endl;
            }
};
int main(){
    shapetriangle t;
    int a,b,c;
    cout<<"enter 1 side";
    cin>>a;
    cout<<"enter 2 side";
    cin>>b;
    cout<<"enter 3 side";
    cin>>c;
    t.set_values(a,b,c);
    t.cal();
    t.get_aandp();
}
