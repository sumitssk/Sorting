#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void bubbleSort(int arr[],int n)
{
    for(int i=n-1;i>0;i--)
    {
        bool didSwap=false;
        for(int j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
                didSwap=true;
            }
        }
        if(didSwap==false)return;
    }
}

int main()
{
    int n;
    n=5;
    int arr[n]={5,4,3,2,1};
    bubbleSort(arr,n);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}