#include<iostream>
using namespace std;
int main ()
{
    int arr[30],i,n,max,min;
    cout<<"Enter size of array :";
    cin>>n;
    cout<<"Enter the element of array :";
    for(i=0;i<n;i++) 
    {
        cin>>arr[i];
    }
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    cout<<"\n largest number :"<<max;
    cout<<"\n smallest number :"<<min<<endl;
    return 0;
}