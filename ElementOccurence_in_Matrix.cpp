#include<iostream>
using namespace std;

int elementoccurence(int arr[][3],int row,int col,int k)
{
    int c=0;
    // for(int i=0;i<row;i++)
    // {
    //     int s=0;
    //     int e=col-1;
    //     while(s<=e)
    //     {
    //         int mid=s+(e-s)/2;
    //         if(arr[i][mid]==k)
    //         {
    //             c+=1;
    //             break;
    //         }
    //         else if(arr[i][mid]>k)
    //         {
    //             e=mid-1;
    //         }
    //         else 
    //         {
    //             s=mid+1;
    //         }
    //     }
    // }

    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            if(arr[i][j]==k)
            {
                c++;
            }
        }
    }
    return c;
}

int main()
{
    int arr[2][3]={{4,7,8},{8,8,7}};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);
    cout<<elementoccurence(arr,row,col,7);
}