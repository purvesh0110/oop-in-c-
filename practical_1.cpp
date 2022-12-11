#include<iostream>
using namespace std;
class student
{
int roll_no;
char name[30];
public:
void get_data();
void put_data();
};
void student :: get_data()
{
cout<<"enter student roll number : ";
cin>>roll_no;
cout<<"enter student name : "<<endl;
cin>>name;
}
void student :: put_data()
{
cout<<"\nstudent roll number: "<<roll_no ;
cout<<"\nstudent name : "<<name <<endl;
}
int main ()
{
student s1;
s1.get_data();
s1.put_data();
return 0;
}
