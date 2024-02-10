#include<iostream>
using namespace std;

void reversearray(int arr[],int n)
{
    int s=0;
    int e=n-1;
    while(s<e)
    {
        swap(arr[s++],arr[e--]);
        
    }
   
}
void print(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before-------"<<endl;
    print(arr,n);
    reversearray(arr,n);
    cout<<"\nAfter-------"<<endl;
    print(arr,n);
}