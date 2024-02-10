#include<iostream>
using namespace std;

// BRUTE FORCE METHOD
void subarrays(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=i;k<=j;k++)
            {
                cout<<arr[k]<<" , ";
            }
            cout<<endl;

        }
            
    }
    cout<<"Total numbers of subarrays are:"<<n*(n+1)/2;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    subarrays(arr,n);
}

// PREFIX SUM METHOD


// KADANE'S ALGORITHM