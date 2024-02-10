#include<iostream>
using namespace std;

void print(int arr[][3],int row,int col)
{
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void transpose(int arr[][3],int row,int col)
{
    int transpose[col][row];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           transpose[j][i]=arr[i][j];
        }
    }
    for(int i=0;i<col;i++)
    {
        for(int j=0;j<row;j++)
        {
            cout<<transpose[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[2][3]={{1,2,3},{4,5,6}};
    print(arr,2,3);
    transpose(arr,2,3);
   
    
}