#include<iostream>
using namespace std;
class manager 
{
    int age;
    char name[30];
    public:
    void get_data();
    void put_data();

};
void manager::get_data()
{
    cout<<"Enter manager name: ";
    cin>>name;
    cout<<"Enter manager age : ";
    cin>>age;

}
void manager::put_data()
{
    cout<<"\nmanager name :"<<name;
    cout<<"\nmanager age: " <<age<<endl;
    
}

int main()
{
    manager m[5];
    int i;
    for (i=0; i<5; i++)
    {
        m[i].get_data();

    }
    cout<<"manager details :" <<endl;
    for(i=0;i<5;i++)
    {
        m[i].put_data();
    }
    return 0 ;
}