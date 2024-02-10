#include<iostream>
using namespace std;

// BRUTEFORCE APPROACH
// void searchsortedmatrix(int arr[][4],int row,int col,int k)
// {
//     for(int i=0;i<row;i++)
//     {
//         for(int j=0;j<col;j++)
//         {
//             if(arr[i][j]==k)
//             {
//                 cout<<"Index at:["<<i<<" , "<<j<<"]";
//             }
//         }
//     }
// }

// int main()
// {
//     int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int row=sizeof(arr)/sizeof(arr[0]);
//     int col=sizeof(arr[0])/sizeof(arr[0][0]);
//     int k;
//     cout<<"Enter a key to search:";
//     cin>>k;
//     searchsortedmatrix(arr,row,col,k);
// }


// ROW WISE BINARY SEARCH IMPLEMENTATION
// void binarysearchmatrix(int arr[][4],int row,int col,int k)
// {
//     int c=0;
//     for(int i=0;i<row;i++)
//     {
//         int start=0;
//         int end=col-1;
//         while(start<=end)
//         {
//             int mid=start+(end-start)/2;
//             if(arr[i][mid]==k)
//             {
//                 c=1;
//                 cout<<"Element found:"<<i<<","<<mid;
//                 break;
//             }
//             else if(arr[i][mid]>k)
//             {
//                 end=mid-1;
//             }
//             else if(arr[i][mid]<k)
//             {
//                 start=mid+1;
//             }
//         }
//     }
//     if(c==0)
//     {
//         cout<<"Element is not in this matrix!";
//     }
// }

// int main()
// {
//     int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int row=sizeof(arr)/sizeof(arr[0]);
//     int col=sizeof(arr[0])/sizeof(arr[0][0]);
//     cout<<"Enter a key to search in the matrix:";
//     int k;
//     cin>>k;
//     binarysearchmatrix(arr,row,col,k);
// }


// STAIRCASE SEARCH APPROACH (0,col-1)
// void staircasesearch(int arr[][4],int row,int col,int k)
// {
//     int i=0;
//     int j=col-1;
//     while(i<row && j>=0)
//     {
//         if(k==arr[i][j])
//         {
//             cout<<"Element Found at index:["<<i<<" , "<<j<<"]";
//             return;
//         }
//         else if(k<arr[i][j])
//         {
//             j--;
//         }
//         else{
//             i++;
//         }
//     }
//     cout<<"Element is not in this matrix!";
// }

// int main()
// {
//     int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
//     int row=sizeof(arr)/sizeof(arr[0]);
//     int col=sizeof(arr[0])/sizeof(arr[0][0]);
//     int k;
//     cout<<"Enter an Element to search in the matrix:";
//     cin>>k;
//     staircasesearch(arr,row,col,k);
// }


// STAIRCASE SEARCH APPROACH (ROW-1,0)
void staircaseapproach(int arr[][4],int row,int col,int k)
{
    int i=row-1,j=0;
    while(i>=0 && j<col)
    {
        if(k==arr[i][j])
        {
            cout<<"Element found at index:["<<i<<","<<j<<"]";
            return;
        }
        else if(k>arr[i][j])
        {
            j++;
        }
        else{
            i--;
        }
    }
    cout<<"Element is not in this matrix!";
}

int main()
{
    int arr[][4]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
    int row=sizeof(arr)/sizeof(arr[0]);
    int col=sizeof(arr[0])/sizeof(arr[0][0]);
    int k;
    cout<<"Enter an element to search is it in this matrix or not:";
    cin>>k;
    staircaseapproach(arr,row,col,k);
}