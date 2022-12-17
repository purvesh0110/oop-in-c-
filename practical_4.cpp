#include<iostream>
using namespace std;
class B;
class A
{
    public :
    A():numA(12)
    {}
    private :
    int numA ;
    friend int add (A,B);
};

class B
{
  public:
  B():numB(22)
  {}
  private:
  int numB;
  friend int add (A,B);

};
int add (A objA,B objB)
{
return (objA.numA+objB.numB);
}

int main()
{
    A objA;
    B objB;
    cout<<"\n sum:  " <<add(objA,objB);
    return 0;

}
