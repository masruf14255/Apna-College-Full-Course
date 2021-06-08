/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/
5.1 Binary Number System | Guaranteed Placement Course | Lecture 5.1

notes :- https://drive.google.com/file/d/1htJpyf0Iuu95PDNz971IdNzH2LX5mjlI/view

5.2 How to reverse a number | Check if a number is Prime or Armstrong | C++ Placement Course | # 5.2

#check a numebr prime or not

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;

	bool flag=0;
	for(int i=2;i<sqrt(n); i++)
	{
		if(n%i==0)
		{
			cout<<"Non-prime\n";
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		cout<<"Prime\n";
	}
	return 0;
}

reverse a number ------

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;//1234
	int reverse=0;
	while(n>0)
	{
		int lastdigit=n%10;//4--3--2--1
		reverse= reverse*10+lastdigit;//4--43--432--4321
		n/=10;//123--12--1--0
	}
	cout<<reverse<<endl;
}

############find amstrong number (every numbers quibe n^3 and sum them and print )---->

#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int sum=0;
	int originaln=n;

	while(n>0)
	{
		int lastdigit=n%10;
		sum+=pow(lastdigit,3);
		n/=10;
	}

	if(sum==originaln)
	{
		cout<<"Armtrong Number\n";
	}
	else
	{
		cout<<"Not Armtrong Number\n";
	}
}
