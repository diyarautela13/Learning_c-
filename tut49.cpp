#include<iostream>
using namespace std;

class test{
    int b;
    int a;
    public:
        //test(int i, int j): a(i), b(j){
        test(int i, int j ): b(j),a(i+b){
            a=a+3;
            cout<<"Constructor called "<<endl;
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;

        }
    
    };
int main(){
    test t(2,3);
    return 0;
}