#include<iostream>
#include<unordered_set>
using namespace std;

// METHOD 1

// bool distinct(int arr[],int n)
// {
//     int m=1;
//     for(int i=0;i<n;i++)
//     {
//         m=1;
//         for(int j=i+1;j<n;j++)
//         {
//             if(arr[i]==arr[j])
//             {
//                 m+=1;
//             }
//             else{
//                 continue;
//             }
//         }
//         if(m>1)
//         {
//             return true;
//         }
//         else{
//             continue;
//         }
//     }
   
//         return false;
    

// }


// METHOD 2
bool distinct(int arr[],int n)
{
    unordered_set<int> a;
    for(int i=0;i<n;i++)
    {
        if(a.find(arr[i])!=a.end())
        {
            return true;
        }
        else{
            a.insert(arr[i]);
        }
    }
    return false;
}

int main()
{
    int arr[]={1,1,3,4,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<distinct(arr,n);
}