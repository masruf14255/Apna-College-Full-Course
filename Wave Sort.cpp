/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

Wave Sort | C++ Placement Course - 20.3

Wave Sort

/*Problem
Given an array, transform the array such that
arr[0] >= arr[1] <= arr[2] >= arr[3] <= arr[4] >= .....
Input: Given an array.
Output: print the sorted array.
Time Complexity: O(N), single pass
Space Complexity: O(1)*/

#include<bits/stdc++.h>
using namespace std;


swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}

void waveSort(int arr[],int n)
{
    for(int i=1; i<n; i+=2)
    {
        if(arr[i]>arr[i-1])
        {
            swap(arr,i,i-1);
        }
        if(arr[i]>arr[i+1] && i<=n-2)
        {
            swap(arr,i,i+1);
        }
    }
}

int main()
{
    int arr[]={1,3,4,7,5,6,2};
    waveSort(arr,7);
    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" ";
    }
}
