#include<iostream>
using namespace std;
class demo
{
    private:
    static int x ;
    public:
    static void fun()
    {
        cout<<"value of x :"<< x << endl;
    }
};

int demo :: x=34 ;
int main()
{
    demo x ;
    x.fun();
    return 0 ;

}


