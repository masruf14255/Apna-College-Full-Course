/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

8.4 Array Challenges | C++ Placement Course

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



@@@@@@@1 to n-1 (maximum value)


int main()
{
	int maxx=INT_MIN;
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	for(int i=0; i<n; i++)
	{
		maxx=max(maxx,a[i]);
		cout<<maxx<<endl;
	}
	return 0;
}

######sub array sub sequence--->>>>


aray={1,2,3,4,5}
sub array={2,3,4};

number of subarrays of an array with n elements = nC2+n=n*(n+1)/2;


if this sub array not make with a continues compare to main array then
	we call it a sub sequence
number of subsequence of an array with n elements = 2^n;

###sub of all subarrays


# given an array a[] of size of n. Output sum ofg each subarray
of the given array


int main()
{
	int n;
	cin>>n;
	itn a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[n];
	}

	int curr=0;
	for(int i=0; i<n; i++)
	{
		curr=0;
		for(it j=1; j<n; j++)
		{
			curr+=a[j];
			cout<<curr<<endl;
		}
	}
}

###longest arithematic subarray

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int pd=a[1]-a[0];
    int j=2;
    int curr=2;
    int ans=2;
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;//3
        }
        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);//3
        j++;
    }
    cout<<ans<<endl;
}

#######record breaker


int main()
{
	int n;
	cin>>n;
	int a[n+1];
	a[n]=-1;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	if(n==1 )
	{
		cout<<"1"<<endl;
		return 0;
	}
	int ans=0;
	int mx=-1;
	for(int i=0; i<n; i++)
	{
		if(a[i]>mx && a[i]>a[i+1])
		{
			ans++;
		}
		mx=max(mx,a[i]);
	}
	cout<<ans<<endl;
}



#find the very first repeating index in subarray

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	const int N=1e6+2;
	int idx[N]={-1};
	int mididx=INT_MAX;
	for(int i=0; i<n; i++)
	{
		if(idx[a[i]]!=-1)
		{
			mididx=min(minidx,idx[a[i]]);
		}
		else
		{
			idx[a[i]]==i;
		}

		if(mididx==INT_MAX)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<minidx+1<<endl;
		}
	}
}


####subarray with given sum


int main()
{
    int n,s;
    cin>>n>>s;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

    int i=0,j=0,st=-1,en=-1,sum=0;

    while(j<n && sum+a[j]<=s)
    {
        sum+=a[j];
        j++;
    }
    if(sum==s)
    {
        cout<<i+1<<" "<<j<<endl;
        return 0;
    }
    while(j<n)
    {
        sum+=a[j];
        while(sum>s)
        {
            sum-=a[i];
            i++;
        }

        if(sum==s)
        {
            st=j+1;
            en=j+1;
            break;
        }
        j++;
    }

    cout<<st<<" "<<en<<endl;

    return 0;
}


##smallest positive missing number

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	const int N=1e6+2;
	bool check[N]=false;

	for(int i=0; i<n; i++)
	{
		if(a[i]>=0)
		{
			check[a[i]]=1;
		}
	}
	int ans=-1;
	for(int i=1; i<N; i++)
	{
		if(check[i]==false)
		{
			ans=i;
			break;
		}
	}
	cout<<ans<<endl;
}
