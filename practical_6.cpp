#include<iostream>
using namespace std;

class function
{
  public:
    int arr[5]={4,2,5,3,1},i,j,temp;
  
  void read()
  {
    cout<<"array element are:";
    for(i=0;i<5;i++)
    {
        cout <<arr[i]<<"";
    }  
  }
  
  void display()
  {
    cout<<endl;
    cout<<"unsorted array is : ";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<"";
    
    }
  }

  void swap()
  {
    for (i=0;i<5;j=i++)
    {
        for(j=i;j<5;j++)
        {
            if (arr[i]>arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
  }

  void sort()
  {
    cout<<endl;
    cout<<"sorted array is : ";
    for(i=0;i<5;i++)
    {
        cout<<arr[i]<<"  ";

    }
  }
};

int main()
{
    int arr[5]={4,2,5,3,1};
    function f;
    f.read();
    f.display();
    f.swap();
    f.swap();
    return 0;
}