#include<iostream>
using namespace std;


int trappedRainwater(int height[],int n)
{
    int leftmax[n];
    leftmax[0]=height[0];

    for(int i=1;i<n;i++)
    {
        leftmax[i]=max(height[i],leftmax[i-1]);
    }

    int rightmax[n];
    rightmax[n-1]=height[n-1];
    for(int i=n-2;i>=0;i--)
    {
        rightmax[i]=max(height[i],rightmax[i+1]);
    }

    int trappedwater=0;
    for(int i=0;i<n;i++)
    {
        int waterlevel=min(leftmax[i],rightmax[i]);
        trappedwater+=waterlevel-height[i];
    }
    return trappedwater;

}
int main()
{
    int height[]={4,2,0,6,3,2,5};
    int n=sizeof(height)/sizeof(height[0]);
    cout<<trappedRainwater(height,n);
}