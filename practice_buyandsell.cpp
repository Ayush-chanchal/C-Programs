#include<iostream>
using namespace std;

int buyandsell(int prices[],int n)
{
    int buy=prices[0];
    int profit=0;
    int bi;
    int si=0;
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        if(buy<prices[i])
        {
            int temp=maxprofit;
            profit=prices[i]-buy;
            maxprofit=max(maxprofit,profit);
            if(temp!=maxprofit&&profit>0)
            {
                si=i;
            }
        }
        else{
            buy=prices[i];
            bi=i;
        }
    }
    cout<<"Buy at day:"<<bi+1<<"\tvalue of stock is "<<prices[bi]<<endl;
    if(si==0)
    {
        cout<<"No profit!: ";
    }
    else{
    cout<<"Sell at day:"<<si+1<<"\tvalue of stock is "<<prices[si]<<"\nprofit: ";
    }
    return maxprofit;
}

int main()
{
    int arr[]={7,1,2,3,6};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<buyandsell(arr,n);
}