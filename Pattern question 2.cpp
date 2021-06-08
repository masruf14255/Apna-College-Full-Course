/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/
4.2 Advanced Pattern Questions in C++ | Guaranteed Placement Course | Lecture 4.2
1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int r;
	cin>>r;
	for(int i=1; i<=r; i++)
	{
		for(int j=i; j>0; j--)
		{
			a=j%2;
			cout<<j<<" ";
		}
		cout<<endl;
	}
}
    ****
   ****
  ****
 ****
 ****
  ****
   ****
    ****
#include<bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin>>t;
    while(t--)
    {

        int r;
        cin>>r;
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=r-i; j++)
            {
                cout<<" ";
            }
            for(int k=1; k<=r; k++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
        for(int i=r; i>0; i--)
        {
            for(int j=1; j<=r-i; j++)
            {
                cout<<" ";
            }
            for(int k=1; k<=r; k++)
            {
                cout<<"* ";
            }
            cout<<endl;
        }
    }
}
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
#include<bits/stdc++.h>
using namespace std;
int main()
{


        int r;
        cin>>r;
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=r-i; j++)
            {
                cout<<" ";
            }
            for(int k=1; k<=i; k++)
            {
                cout<<k<<" ";
            }
            cout<<endl;
        }

}
    1
  2 1 2
3 2 1 2 3

#include<bits/stdc++.h>
using namespace std;
int main()
{


        int r;
        cin>>r;
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=r-i; j++)
            {
                cout<<" ";
            }
            for(int k=i; k>0; k--)
            {
                cout<<k;
            }
            for(int k=2; k<=i; k++)
            {
                cout<<k;
            }
            cout<<endl;
        }

}
   *
  ***
 *****
*******
 *****
  ***
   *
#include<bits/stdc++.h>
using namespace std;
int main()
{


        int r;
        cin>>r;
        for(int i=1; i<=r; i++)
        {
            for(int j=1; j<=r-i; j++)
            {
                cout<<" ";
            }
            for(int k=i; k>0; k--)
            {
                cout<<"*";
            }
            for(int k=2; k<=i; k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }
        for(int i=r; i>0; i--)
        {
            for(int j=1; j<=r-i; j++)
            {
                cout<<" ";
            }
            for(int k=i; k>0; k--)
            {
                cout<<"*";
            }
            for(int k=2; k<=i; k++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

}



|     *        *
|   *   *    *   *
| *        *       *
----------------------
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=3; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(((i+j)%4==0) || (i==2 && j%4==0))
            {
                cout<<"* ";
            }
            else
            {

                cout<<"  ";
            }

        }
        cout<<endl;
    }
}

