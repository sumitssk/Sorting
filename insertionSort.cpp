#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void insertionSort(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int j=i;
        while(j>0 && arr[j]<arr[j-1])
        {
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
}

int main()
{
    int n;
    n=5;
    int arr[n]={5,4,3,2,1};
    insertionSort(arr,n);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}