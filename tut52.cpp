#include<iostream>
using namespace std;
class shopitem{
    int id;
    float price;
    public:
        void setdata(int i, float j){
            id=i;
            price=j;
        }
        void getdata(){
            cout<<"The id is "<<id <<endl;
            cout<<"The price is "<<price <<endl;
        }
};
int main(){
    shopitem *ptr =new shopitem[3];
    shopitem* ptrtemp=ptr;
    int i,p;
    float q;
    for(i=0; i<3;i++){
        cout<<"The id and price of item  number is "<<i+1<<endl;
        cin>>p>>q;
        ptr->setdata(p,q);
        ptr++;
    }
    for ( i = 0; i < 3; i++)
    {   cout<<"Item number "<<i+1<<endl;
        ptrtemp->getdata();
        ptrtemp++;
    }
    
    return 0;
}