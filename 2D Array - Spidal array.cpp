/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

9.1 Two Dimensional Arrays | 2D Arrays | C++ Placement Course

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[i][j];

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}

	//find a element->
	int x;
	cin>>x;
	bool flag=false;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]==x)
			{
				cout<<i<<" "<<j<<endl;
				flag=true;
			}
		}
	}

	if(flag)
	{
		cout<<"Element is found\n";
	}
	else
	{
		cout<<"Element not found\n";
	}


}


//spiral order matrix traversal

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;
	int a[i][j];

	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin>>a[i][j];
		}
	}

	// spiral order

	int row_start=0,row_end=0,
	column_start=0,column_end=0;

	while(row_start<=row_end && column_start<=column_end)
	{
		//for row start
		for(int col=column_start; col<=column_end; col++)
		{
			cout<<a[row_start][col]<<" ";

		}
		row_start++;

		// column end
		for(int row=row_start; row<=row_end; row++)
		{
			cout<<a[row][column_end]
		}
		column_end--;

		//for row end
		for(int col=column_end; col>=column_start; col--)
		{
			cout<<a[row_end][col]<<" ";
		}
		row_end--;
		// column start
		for(int row=row_end; row>=row_start; row--)
		{
			cout<<a[eow][column_start];
		}
		column_start++;
	}
	return 0;
}
