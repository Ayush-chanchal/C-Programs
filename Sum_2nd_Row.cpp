#include<iostream>
using namespace std;

int sum1(int arr[][3],int col)
{
    int sum=0;
    for(int j=0;j<col;j++)
    {
        sum+=arr[1][j];
    }
    return sum;
}

int main()
{
    int arr[][3]={{1,4,9},{11,4,3},{2,2,3}};
    int col=sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<sum1(arr,col);
}