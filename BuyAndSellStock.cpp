#include<iostream>
using namespace std;

int buysell(int prices[],int n)
{
    int buyprice=INT_MAX;
    int maxprofit=0;
    for(int i=0;i<n;i++)
    {
        if(buyprice<prices[i])
        {
            int profit=prices[i]-buyprice;
            maxprofit=max(maxprofit,profit);
        }
        else{
            buyprice=prices[i];
        }
    }
    return maxprofit;
}

int main()
{
    int prices[]={7,1,5,3,6,4};
    int n=sizeof(prices)/sizeof(prices[0]);
    cout<<buysell(prices,n);
}