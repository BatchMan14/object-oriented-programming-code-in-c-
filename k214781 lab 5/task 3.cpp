#include<iostream>
#include<string>
using namespace std;
class matrix{
        
    int mat[2][2];
    public:
void set_matrix(){
    int c=1;
        for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        cout<<"enter value of "<<c<<" matrix "<<i<<j<<":";
        cin>>mat[i][j];
}
}
    c++;

}
        matrix(){
            set_matrix();
        }
        
    friend void add(matrix obj1,matrix obj2);
    friend void sub(matrix obj1,matrix obj2);
    friend void mul(matrix obj1,matrix obj2);
};
void add(matrix obj1,matrix obj2){
    int matr[2][2];
    matr[0][0]=obj1.mat[0][0]+obj2.mat[0][0];
    matr[0][1]=obj1.mat[0][1]+obj2.mat[0][1];
    matr[1][0]=obj1.mat[1][0]+obj2.mat[1][0];
    matr[1][1]=obj1.mat[1][1]+obj2.mat[1][1];
    cout<<"results after matrix addition is "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matr[i][j]<<"        ";
        }
        cout<<endl;
        }
    
}
 void sub(matrix obj1,matrix obj2){
    int matr[2][2];
    matr[0][0]=obj1.mat[0][0]-obj2.mat[0][0];
    matr[0][1]=obj1.mat[0][1]-obj2.mat[0][1];
    matr[1][0]=obj1.mat[1][0]-obj2.mat[1][0];
    matr[1][1]=obj1.mat[1][1]-obj2.mat[1][1];
    cout<<"results after matrix subtraction is "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matr[i][j]<<"        ";
        }
        cout<<endl;
        }
}
void mul(matrix obj1,matrix obj2){
    int matr[2][2];
    matr[0][0]=obj1.mat[0][0]*obj2.mat[0][0];
    matr[0][1]=obj1.mat[0][1]*obj2.mat[0][1];
    matr[1][0]=obj1.mat[1][0]*obj2.mat[1][0];
    matr[1][1]=obj1.mat[1][1]*obj2.mat[1][1];
    cout<<"results after matrix multiplication is "<<endl;
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cout<<matr[i][j]<<"        ";
        }
        cout<<endl;
        }
}
int main()
{
matrix obj1;
matrix obj2;
add( obj1,obj2);
sub( obj1, obj2);
mul( obj1, obj2);
}
