/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

10. Character Arrays | C++ Placement Course

#include<bits/stdc++.h>
using namespace std;

int main()
{
	char a[100]="apple khaw";
	int i=0;

	while(a[i]!='\0')
	{
		cout<<a[i]<<endl;
		i++;
	}
	return 0;
}

largest word in palindrome-

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	cin.ignore();

	char a[n+1];
	cin.getline(a,n);
	cin.ignore();

	int i=0;
	int currlen=0,maxlen=0;
	itn st=0,maxst=0;
	whiel(1)
	{
		if(a[i]==' '|| a[i]=='\0')
		{
			if(currlen>maxlen)
			{
				maxlen=currlen;
				maxst=st;
			}
			currlen=0;
			st=i+1;
		}
		else
		currlen++:
		if(a[i]=='\0')
			break;
		i++;
	}
	cout<<maxlen<<endl;
	for(inti=0; i<maxst; i++)
	{
		cout<<a[i];
	}
}
