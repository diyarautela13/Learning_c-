#include<iostream>
using namespace std;

class base1{
    int data1;
    public:
    base1(int i){
        data1 = i;
        cout<<"Constructor of base1 called"<<endl;
    }
    void printdata1(){
        cout<<"The value of data 1 is "<<data1<<endl;
    }

};
class base2{
    int data2;
    public:
    base2(int i){
        data2 = i;
        cout<<"Constructor of base2 called"<<endl;
    }
    void printdata1(){
        cout<<"The value of data 2 is "<<data2<<endl;
    }

};
class derived :public base1 , public base2{
    public:
    int derived1, derived2;
    derived(int a, int b, int c ,int d):base1(a), base2(b){
        derived1=c;
        derived2=d;
        cout<<"Constructor of derived class called "<<endl;
    }
    void printdata1(){
        base1::printdata1();
    }
    void printderived(){
        cout<<"The value of derived 1 is "<<derived1;
        cout<<"The value of derived 2 is "<<derived2;
    }
};
int main(){
    derived d(1,2,3,4);
    d.printdata1();
    return 0;
}