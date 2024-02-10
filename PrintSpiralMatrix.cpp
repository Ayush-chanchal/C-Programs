#include<iostream>
using namespace std;

void printSpiralmatrix(int arr[][4],int row,int col)
{
    int startrow=0;
    int startcol=0;
    int endrow=row-1;
    int endcol=col-1;
    while(startrow<=endrow && startcol<=endcol)
    {
        // TOP
        for(int i=startcol;i<=endcol;i++)
        {
            cout<<arr[startrow][i]<<"\t";
        }
        // LEFT
        for(int j=startrow+1;j<=endrow;j++)
        {
            cout<<arr[j][endcol]<<"\t";
        }
        // BOTTOM
        for(int i=endcol-1;i>=startcol;i--)
        {
            if(startrow==endrow)
            break;
            cout<<arr[endrow][i]<<"\t";
        }
        // RIGHT
        for(int j=endrow-1;j>startrow;j--)
        {
            if(startcol==endcol)
            break;
            cout<<arr[j][startcol]<<"\t";
        }
        startrow++;
        startcol++;
        endrow--;
        endcol--;
    }
}

int main()
{
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);
    printSpiralmatrix(arr,row,col);
}