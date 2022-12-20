#include<iostream>
using namespace std;
class employee 
{

    public:
    employee ()
    {
        cout<<"Default constrctor called ";
    }
};

class manager
{

    public:
    int id;
    string name;
    float salary;
    manager(int i,string n,float s)
    {
      id=i;
      name=n;
      salary=s;

    }

        
    void display()
    {
        cout<<"Manager id:"<<id<<endl;
        cout<<"manager name:"<<name<<endl;
        cout<<"Manager salary:"<<salary<<endl;
    }
    ~ manager()
    {
        cout<<endl;
        cout<<"destrutor called";
    }

   
};

int main()
{
    employee e1;
    manager m1 = manager(101,"PURVESH",50000);
    m1.display();
    return 0;
}


