#include<iostream>
using namespace std;

void pairsarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            cout<<"pair("<< arr[i] <<","<< arr[j]<<")"<<"\t";
        }
        cout<<endl;
    }
    cout<<endl<<"Total number of pairs are:"<<n*(n-1)/2;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    pairsarray(arr,n);
}