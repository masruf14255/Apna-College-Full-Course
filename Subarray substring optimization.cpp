/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

// 8.6 Subarrays - Challenges | Questions asked by Top MNC's | C++ Placement Course





find max sum of subarrays of an arrays----->>>>





#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	int maxSum=INT_MIN;
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			for(int k=i; k<=j; k++)
			{
				sum+=a[k];
				//cout<<a[k]<<" ";
			}cout<<endl;
			maxSum=max(maxSum,sum)
		}
	}
	cout<<maxSum<<endl;
}

####cumulated sum approch->>>>>>

int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int currsum[n+1];
	currsum[0]=0;

	for(int i=1; i<=n; i++)
	{
		currsum[i]=currsum[i-1]+a[i-1];
	}
	int maxSum=INT_MIN;
	for(int i=1; i<=n; i++)
	{
		int sum=0;
		for(int j=0; j<i<j++)
		{
			sum=currsum[i]-currsum[j];
			maxSum=max(sum,maxSum);
		}
	}

	cout<<maxSum<<endl;

	return 0;

}

?????????????????????????max sum best optimize_---->>>>>>
int main()
{
	int n;
	cin>>n;
	int ar[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}
	int currsum=0;
	int maxSum=INT_MIN;
	for(int i=0; i<n; i++)
	{
		currsum+=ar[i];
		if(currsum<0)
		{
			currsum=0;
		}
		maxSum=max(maxSum,currsum);
	}

	cout<<maxSum<<endl;

	return 0;

}


// ///////////////maximum circular subarray sum----->>>>>>>>>



int kadane(int a[],int n)
{
	itn currsum=0;
	int maxSum=INT_MIN;
	for(int i=0; i<n; i++)
	{
		currsum+=a[i];
		if(currsum<0)
		{
			currsum=0;
		}
		maxSum=max(maxSum,currsum);
	}
	return maxSum;
}

int main()
{
	int n;
	cin>>n;
	int a[n];
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	int wrapsum,nonwrapsum;
	nonwrapsum=kadane(a,n);

	int totalsum=0;
	for(int i=0; i<n; i++)
	{
		totalsum+=a[i];
		a[i]=-a[i];
	}

	wrapsum=totalsum+kadane(a,n);
	cout<<max(wrapsum,nonwrapsum)<<endl;


	return 0;


}



#########pair sum----->>>>

bool pairsum(int a[],itn n,int k)
{
	for(int i=0; i<n; i++)
	{
		for(int j=i; j<n; j++)
		{
			if(a[i]+a[j]==k)
			{
				return true;
			}
		}
	}
	return false;
}

int main()
{
	int a[]={2,4,7,11,14,16,20,21};
	int k=31;


	cout<<pairsum(a,8,k)<<endl;

	return 0;
}


bool pairsum(int a[],itn n,int k)
{
	int low=0;
	int high=n-1;
	while(low<high)
	{
		if(a[low]+a[high]==k)
			return true;
		else if(a[low]+a[high]>k)
			high--;
		else
		{
			kow++;
		}
	}

	return false;
}

int main()
{
	int a[]={2,4,7,11,14,16,20,21};
	int k=31;


	cout<<pairsum(a,8,k)<<endl;

	return 0;
}

