#include<iostream>
#include<math.h>
using namespace std;

class simple_calculator
{   int a,b;
    public:
        void num(){
            cout<<"Enter number1 "<<endl;
            cin>>a;
            cout<<"Enter number2"<<endl;
            cin>>b;
        }


        void func(){
            cout<<"The sum of numbers is "<<a+b<<endl;
            cout<<"The difference of numbers is "<<a-b<<endl;
            cout<<"The product of numbers is "<<a*b<<endl;
            cout<<"The division of numbers is "<<a/b<<endl;
            cout<<"The remainder of numbers is "<<a%b<<endl;
        }

    };
class scientific_calculator{
    int x,y;
    public:
        void setnum()
        {
            cout<<"Enter number1 "<<endl;
            cin>>x;
            cout<<"Enter number2"<<endl;
            cin>>y;
        }

        void getnum(){
            cout<<"The sin of the numbers are "<<sin(x)<<sin(y)<<endl;
            cout<<"The cos of the numbers are "<<cos(x)<<cos(y)<<endl;
            cout<<"The log of the numbers are "<<log(x)<<log(y)<<endl;
            cout<<"The tan of the numbers are "<<tan(x)<<tan(y)<<endl;
        }
};

class hybrid_calculator: public simple_calculator, public scientific_calculator 
{

};
int main(){
    hybrid_calculator hyb;
    hyb.num();
    hyb.func();
    hyb.setnum();
    hyb.getnum();
    return 0;
}