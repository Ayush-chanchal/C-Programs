#include<iostream>
using namespace std;

int bsearch(int arr[],int n,int k)
{
   int s=0;
   int e=n-1;
   while(s<=e)
   {
        int mid=s+(e-s)/2;
        if(arr[mid]==k)
        {
            return mid;
        }
        else if(arr[mid]<k)
        {
            s=mid+1;
        }
        else if(arr[mid]>k)
        {
            e=mid-1;
        }
   }
   return -1;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int k;
    cin>>k;
    int a=bsearch(arr,n,k);
    if(a==-1)
    cout<<"Element is not present in thearray!";
    else
    cout<<"Element is present at the index:"<<a;

}