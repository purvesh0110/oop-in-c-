#include<iostream>
using namespace std;

class engineer
{
    protected:
    char name_e[20];
    char branch_e[20];
    int exp_e;
    public:
    void getdata_engg();
};

class doctor
{
    protected:
    char name_d[20];
    char specialization[20];
    int exp_d;
    
    public:
    void getdata_doc();

};

class student 
{
    protected:
    char name_s[20];
    char coursename[20];
    int rollno;
    public:
    void getdata_stud();


};

class labourer
{
    protected:
    char name_l[20];
    char work[20];
    int age ;
    public:
    void getdata_lab();

};

class database: public engineer,public doctor, public student, public labourer

{
    public:
    void display();
};

int main()
{
    database d;
    d.getdata_engg();
    d.getdata_doc();
    d.getdata_stud();
    d.getdata_lab();
    d.display();
    return 0;

}

void engineer::getdata_engg()
{
    cout<<"ENTER DATA OF ENGINEER ";
    cout<<"ENTER NAME :"<<endl;
    cin>>name_e;
    cout<<"ENTER BRANCH :"<<endl;
    cin>>branch_e;
    cout<<"ENTER EXPERIENCE :"<<endl;
    cin>>exp_e;

};

void doctor ::getdata_doc()
{
    cout<<"ENTER STUDENT DATA"<<endl;
    cout<<"ENTER NAME :"<<endl;
    cin>>name_d;
    cout<<"ENTER SPECIALIZATION :"<<endl;
    cin>>specialization;
    cout<<"ENTER EXPERIENCE :"<<endl;
    cin>>exp_d;

};

void student ::getdata_stud()
{
    cout<<"ENTER STUDENT DATA"<<endl;
    cout<<"ENTER NAME :"<<endl;
    cin>>name_s;
    cout<<"ENTER COURSE NAME :"<<endl;
    cin>>coursename;
    cout<<"ENTER ROLL NUMBER :"<<endl;
    cin<<rollno;
    

};

void labourer::getdata_lab()
{
    cout<<"ENTER DATA OF LABOURER ";
    cout<<"ENTER NAME:"<<endl;
    cin>>name_l;
    cout<<"ENTER WORK :"<<endl;
    cin>>work;
    cout<<"ENTER AGE:"<<endl;
    cin>>age;

};

void database::display()
{
    int choice;
    char ans;
    do
    {
        cout<<"\n 1.ENGINEER \n 2.DOCTOR \n 3.STUDENT \n 4.LABOURER ";
        cout<<"ENTER YOUR CHOISE TO DISPLAY DATABASE";
        cin>>choice;
        switch(choice)
        {
            case 1:
            cout<<name_e<<endl;
            cout<<branch_e<<endl;
            cout<<exp_e<<endl;
            break;

            case 2:
            cout<<name_d<<endl;
            cout<<specialization<<endl;
            cout<<exp_d<<endl;
            break;

            case 3:
            cout<<name_s<<endl;
            cout<<coursename<<endl;
            cout<<rollno<<endl;
            break;

            case 4:
            cout<<name_l<<endl;
            cout<<work<<endl;
            cout<<age<<endl;
            break;


        }
        cout<<"DO YOU WANT TO CONTINUE ?";
        cin>>ans;

    }
    while (ans=='y'||ans=='Y');
    
    
};
