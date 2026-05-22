#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
        void setdata(int i, int j){
            real= i;
            imaginary=j;
        }
        void getdata(){
            cout<<"The value of real part is "<<real<<endl;
            cout<<"The value of imaginary part is "<<imaginary<<endl;
        }
};
int main(){
    complex c1;
    complex *p = new complex[8];
    (p+1)-> setdata(4,5);
    (p+1)->getdata();
    return 0;
}