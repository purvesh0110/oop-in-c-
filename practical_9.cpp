#include<iostream>
using namespace std;

class complex 
{
    public:
    float real;
    float img;

    complex()
    {
        this ->real=0.0;
        this ->img=0.0;

    }
    complex(float real , float img)
    {
        this->real=real;
        this->img=img;

    }
    complex operator+(const complex &obj)
    {
        complex temp;
        temp.img=this->img+obj.img;
        temp.real=this->real+obj.real;
        return temp;
    }
    complex operator-(const complex &obj)
    {
        complex temp;
        temp.img=this->img-obj.img;
        temp.real=this->real-obj.real;
        return temp;
    }
    complex operator*(const complex &obj)
    {
        complex temp;
        temp.img=this->img*obj.img;
        temp.real=this->real*obj.real;
        return temp;
    }
    complex operator/(const complex &obj)
    {
        complex temp;
        temp.img=this->img/obj.img;
        temp.real=this->real/obj.real;
        return temp;
    }
    void display()
    {
        cout<<this->real<<"+"<<this->img<<"i"<<endl;

    }
    
    
};

int main()
{
    complex a,b,c;

    cout<<"Enter realand complex part of first complex number "<<endl;
    cin>>a.real;
    cin>>b.img;

    cout<<"Enter real and complex part of second complex number "<<endl;
    cin>>b.real;
    cin>>b.img;

    cout<<"Addition result :";
    c=a+b;
    c.display();

    cout<<"Subtrcaction result :";
    c=a-b;
    c.display();
    
    cout<<"Multiplication result :";
    c=a*b;
    c.display();

    cout<<"division result ";
    c=a/b;
    c.display();

    return 0;
}