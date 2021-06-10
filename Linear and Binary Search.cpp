/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

8.2 Searching in Arrays | Linear and Binary Search | C++ Placement Course |


/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.
*/

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

int linearSearch(int arr[],int n,int key)
{
	for(int i=0; i<n; i++)
	{
		if(arr[i]==key)
		{
			return i;
		}
	}
	return -1;
}
int main()
{
	int main()
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0; i<n; i++)
		{
			cin>>arr[i];
		}

		int key;
		cin>>key;

		cout<<linearSearch(arr,n,key)<<endl;

		return 0;

	}
}


int binarySearch(int arr[],int n,int key)
{
	int s=0;
	int e=n;

	while(s<=e)
	{
		int mid=(s+e)/2;


		if(arr[mid]==key)
		{
			return mid;
		}
		else if(arr[mid]>key)
		{
			e=mid-1;
		}
		else
		{
			e=mid+1;
		}
	}
	return -1;
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;

cout<<binarySearch(arr,n,key)<<endl;

}
