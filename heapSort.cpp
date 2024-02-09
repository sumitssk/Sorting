#include<iostream>
#include<bits/stdc++.h>

using namespace std;

void heapify(vector<int> &arr,int n,int i)
{
    int size=arr.size();
    int left=2*i+1;
    int right=2*i+2;
    int maximum=i;
    if(arr[left]>arr[maximum] && left<n)maximum=left;
    if(arr[right]>arr[maximum] && right<n)maximum=right;
    if(maximum!=i)
    {
        swap(arr[maximum],arr[i]);
        heapify(arr,n,maximum);
    }
}

void buildheap(vector<int> &arr)
{
    int n=arr.size();
    for(int i=(n-2)/2;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}
void heapSort(vector<int> &arr)
{
    buildheap(arr);
    int n=arr.size();
    for(int i=n-1;i>=0;i--)
    {
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }

}
int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    heapSort(arr);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
    return 0;
}