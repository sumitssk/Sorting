#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void merge(int arr[],int start,int mid,int end)
{
    int n=end-start+1;
    int temp[n];
    int i=start,j=mid+1;
    int size=0;
    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j])
        {
            temp[size]=arr[i];
            size++;
            i++;
        }
        else{
            temp[size]=arr[j];
            size++;
            j++;
        }
    }
    while(i<=mid)
    {
        temp[size]=arr[i];
        i++;
        size++;
    }
    while(j<=end)
    {
        temp[size]=arr[j];
        j++;
        size++;
    }
    for(int x=start;x<=end;x++)
    {
        arr[x]=temp[x-start];
    }
}

void mergeSort(int arr[],int start,int end)
{
    if(start>=end)return ;
    
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    
}


int main()
{
    int n;
    n=5;
    int arr[n]={5,4,3,2,1};
    mergeSort(arr,0,n-1);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}