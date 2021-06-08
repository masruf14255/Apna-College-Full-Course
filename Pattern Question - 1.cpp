/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.


4.1 Awesome Pattern Questions -1 | Guaranteed Placement Course
####pattern#########

****
****
****
****
****

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	for(int i=1; i<=r; i++)
	{
		for(int j=1; j<=c; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}

****
*  *
*  *
*  *
****
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c;
	cin>>r>>c;
	for(int i=1; i<=r; i++)
	{
		for(int j=1; j<=c; j++)
		{
			if(i==1 || i==r)
			{
				cout<<"*";
			}
			else if(j==1 || j==c)
			{
				cout<<"*";
			}
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
}
*****
****
***
**
*
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r;
	cin>>r;
	for(int i=5; i>0; i--)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<"* ";
		}
		cout<<endl;
	}
}
    *
   **
  ***
 ****
*****
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r;
	cin>>r;
	for(int i=1; i<=r; i++)
	{
		for(int j=1; j<=r; j++)
		{
			if(j<=r-i)
			{
				cout<<" ";
			}
			else
			{
				cout<<"*";
			}
		}
		cout<<endl;
	}
}
1
22
333
4444
55555
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r;
	cin>>r;
	for(int i=1; i<=r; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<i;
		}
		cout<<endl;
	}
}
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r,c=1;
	cin>>r;
	for(int i=1; i<=r; i++)
	{
		for(int j=1; j<=i; j++)
		{
			cout<<c<<" ";
			c++;
		}
		cout<<endl;
	}
}
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=i; j++)
		{
		    cout<<"*";
		}
		int space =2*n-2*i;
		for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
		{
		    cout<<"*";
		}
		cout<<endl;
	}

	for(int i=n; i>0; i--)
	{
		for(int j=1; j<=i; j++)
		{
		    cout<<"*";
		}
		int space =2*n-2*i;
		for(int j=1; j<=space; j++)
        {
            cout<<" ";
        }
        for(int j=1; j<=i; j++)
		{
		    cout<<"*";
		}
		cout<<endl;
	}
}
