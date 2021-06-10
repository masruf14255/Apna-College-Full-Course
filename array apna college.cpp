/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/
7.1 Time Complexity | C++ Placement Course


8.1 Introduction to Arrays in C++ | Guaranteed Placement Course

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

int main()
{
	int arr[4]={10,20,30,40};

	cout<<arr[3]<<endl;
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}

	for(int i=0; i<n; i++)
	{
		cout<<arr[i];
	}
}

max min--------

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
	{
		cin>>arr[i];
	}
	int maxNo= INT_MIN;
	int minNo= INT_MAX;
	for(int i=0; i<n; i++)
	{
		// if(arr[i]>maxNo)
		// {
		// 	maxNo=arr[i];
		// }
		maxNo=max(maxNo,arr[i]);
		// if(arr[i]>minN0)
		// {
		// 	minN0=arr[i];
		// }
		minNo=min(minNo,arr[i]);


	}
	cout<<maxNo<<" "<<minNo<<endl;

	return 0;
}
