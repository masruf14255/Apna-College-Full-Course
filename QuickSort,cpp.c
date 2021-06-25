/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

Quick Sort | Code and Explanation | C++ Course - 19.2

#include<bits/stdc++.h>
using namespace std;


void swap(int arr[],int i,int j)
{
    int temp=arr[i];
    arr[i]=arr[j];
    arr[j]=temp;
}
int partition(int arr[],int l,int r)
{
    int pivot=arr[r];
    int i=l-1;
    for(int j=l; j<r; j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr,i,j);
        }
    }
    swap(arr,i+1,r);
    return i+1;
}

void quicksort(int arr[],int l,int r)
{
    if(l<r)
    {
        pi=partition(arr,l,r);
        quicksort(arr,l,pi-1);
        quicksort(arr,pi+1,l);
    }
}
int main()
{
    int arr[5]={5,4,3,2,1};
    quicksort(arr,0,4);
    for(int i=0; i<5; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
