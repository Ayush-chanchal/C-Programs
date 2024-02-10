#include<iostream>
using namespace std;

void largestAndsmallest(int arr[][4],int row,int col)
{
    int large=INT_MIN;
    int small=INT_MAX;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            large=max(large,arr[i][j]);
            small=min(small,arr[i][j]);
        }
    }
    cout<<"Largest:"<<large<<endl;
    cout<<"Smallest:"<<small<<endl;
}

int main()
{
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int n=sizeof(arr[0])/sizeof(arr[0][0]);
    int m=sizeof(arr)/sizeof(arr[0]);
    largestAndsmallest(arr,n,m);
}