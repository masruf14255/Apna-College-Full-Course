/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

8.3.1 Sorting in Arrays | Selection Sort | C++ Placement Course

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef long l;
typedef vector<int> vint;
typedef pair<int,int> pint;
typedef unsigned long long ull;

#define MAX 1000000001
#define MOD 1000000007
#define sc scanf
#define pf printf
#define nl pf("\n")
#define rep(i, n) for (int i = 0; i < n; ++i)

int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	for(int i=0; i<n-1; i++)
	{
		for(inr j=i+1; j<n; j++)
		{
			if(arr[j]<arr[i])
			{
				int temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}

8.3.2 Bubble Sort | Sorting in C++ | Guaranteed Placement Course

B U B B L E  S O R T --------->>>>>>>
Reapetedly swap two adjacent elements if they are in wrong order

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	int counter=1;
	while(counter<n-1)
	{
		for(int i=0; i<n-counter; i++)
		{
			if(arr[i]>arr[i+1])
			{
				int temp=arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		counter++:
	}
	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}


INSERTION SORT ------>>>>>>>>>>>

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	for(int i=1; i<n; i++)
	{
		int current=arr[i];
		int j=i-1;
		while(arr[j]>current && j>=0)
		{
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=current;
	}

	for(int i=0; i<n; i++)
	{
		cout<<arr[i]<<endl;
	}
}
