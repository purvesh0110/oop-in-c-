#include<iostream>
using namespace std;
class add
{
     
    int x=0;
    int y=0;

    public:
    void sum(){
        cout<<"The sum of "<<x<<"and"<<"is:"<<x+y<<endl;
    }

};

class mul
{
    
    int a=20;
    int b=30;
    public:
    void mul(){
        cout<<"the multiplication of "<<a<<"and"<<b<<"is :"<<a*b<<endl;

    }
};


class sub 
{
    
    int a=50;
    int b=30;
    public:
    void sub(){
        cout<<"The subtraction of "<<a<<"and"<<b<<"is"<<a-b<<endl;

    }
};

class derived : public add,public mul , public sub
{
    public:
    int p=12;
    int q=5;
    
    void mod(){
        cout <<"the modulus of "<<p<<"and"<<q<<"is:"<<p%q;

    }
};

int main()
{
   derived dr;
   dr.mod();
   dr.sum();
   dr.mul();
   dr.sub();
   


}