#include<iostream>
using namespace std;

void lsearch(int arr[],int k)
{
    int c=-1;
    for(int i=0;i<5;i++)
    {
        if(arr[i]==k)
        {
            c=0;
            cout<<"That element is at index:"<<i;
            break;
        }


    }
    if(c==-1)
    cout<<"That element is not in the array!";
}
int main()
{
    int arr[]={1,2,3,4,5};
    int n;
    cin>>n;
    lsearch(arr,n);
}