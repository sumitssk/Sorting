#include<iostream>
#include<bits/stdc++.h>

using namespace std;
int partition(vector<int> &arr,int low,int high)
{
    int pivot=arr[low];
    int left=low;
    int right=high;
    while(left<right)
    {
        while(arr[left]<=pivot && left<=high-1)left++;
        while(arr[right]>pivot && right>=low+1)right--;
        if(left<right)swap(arr[left],arr[right]);
    }
    swap(arr[low],arr[right]);
    return right;

}
void QuickSort(vector<int> &arr,int low,int high)
{
    if(low>=high)return ;
    int p=partition(arr,low,high);
    QuickSort(arr,low,p-1);
    QuickSort(arr,p+1,high);
}
void quickSort(vector<int> &arr)
{
    int low=0;
    int high=arr.size()-1;
    QuickSort(arr,low,high);
}

int main()
{
    vector<int> arr;
    arr.push_back(5);
    arr.push_back(4);
    arr.push_back(3);
    arr.push_back(2);
    arr.push_back(1);
    quickSort(arr);
    for(auto x:arr)
    {
        cout<<x<<" ";
    }
}