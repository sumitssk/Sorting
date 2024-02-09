#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void selectionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[min])min=j;
        }
        swap(arr[min],arr[i]);
    }
}

int main()
{
    int n;
    n=5;
    int arr[n]={0,0,0,2,1};
    selectionSort(arr,n);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}