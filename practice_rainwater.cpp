#include<iostream>
using namespace std;

int rainwater(int heights[],int n)
{
    int leftmax[n];
    leftmax[0]=heights[0];
    for(int i=1;i<n;i++)
    {
        leftmax[i]=max(leftmax[i-1],heights[i]);
    }

    int rightmax[n];
    rightmax[n-1]=heights[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rightmax[i]=max(heights[i],rightmax[i+1]);
    }
    int trappedwater=0;
    for(int i=0;i<n;i++)
    {
        int trappedheight=min(leftmax[i],rightmax[i]);
        trappedwater=trappedwater+(trappedheight-heights[i]);
    }
        return trappedwater;
}

int main()
{
    int arr[]={2,2,0,1,0,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<rainwater(arr,n);
}

