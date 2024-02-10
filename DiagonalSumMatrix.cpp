#include<iostream>
using namespace std;

// Brute Force Method
int diagonalsum(int arr[][4],int row,int col)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(i==j)
            {
                sum+=arr[i][j];
            }
            else if((i+j)==row-1)
            {
                sum+=arr[i][j];
            }
        }
    }
    return sum;
}

// OPTIMIXED WAY

int diagonalsum2(int arr[][4],int row)
{
    int sum=0;
    for(int i=0;i<row;i++)
    {
        sum+=arr[i][i];
        sum+=arr[i][row-i-1];
    }
    return sum;
}

int main()
{
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<"Sum of the diagonal of the given array(Brute force):"<<diagonalsum(arr,row,col)<<endl;
    cout<<"Sum of the diagonal of the given array(optimized way):"<<diagonalsum2(arr,row);
}