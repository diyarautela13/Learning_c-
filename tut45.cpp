#include<iostream>
using namespace std;
class student

{
    protected:
    int roll_number;
    public:
    void set_roll_number(int r){
        roll_number = r;
    }
    void get_roll_number(){
        cout<<"The roll number is "<<roll_number<<endl;
    }
};
class test: virtual public student{
    protected:
    float maths;
    float physics;          
    public:
    void set_marks(float m1, float m2){
        maths = m1;
        physics = m2;
    }                                   
    void get_marks(){
        cout<<"The marks obtained in maths are "<<maths<<endl;
        cout<<"The marks obtained in physics are "<<physics<<endl;
    }
};
class sports: virtual public student{
    protected:
    float score;
    public:
    void set_score(float sc){
        score=sc;
    }
    void get_score(){
        cout<<"The score obtained in sports is "<<score<<endl;
    }
};
class result: public test, public sports{
    private:
    float total;
    public:
    void display(){
        total = maths + physics + score;
        get_roll_number();
        get_marks();
        get_score();
        cout<<"The total score is "<<total<<endl;
    }
};
int main(){
    result r1;
    r1.set_roll_number(101);
    r1.set_marks(85.5, 90.0);
    r1.set_score(80.0);
    r1.display();
    return 0;
}
