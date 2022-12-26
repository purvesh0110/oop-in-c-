#include<iostream>
using namespace std;
int main()
{
    int arr[5],i;
    int*p;
    p=&arr[0];

    cout<<"Enter array elements: "<<endl;
    for(i=0;i<5;i++)
    {
        cin>>*(p+i);

    }

    cout<<"Array elements are : "<<endl;
    for (i=0 ; i <5 ; i++)
    {
        cout<<*(p+i)<<endl;

    }
    return 0;
    
}