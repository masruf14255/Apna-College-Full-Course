/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

12. Stack & Heap | C++ Placement Course

dynamic memory allocation->

stack and heap

13. Strings in C++ | Guaranteed Placement Course | Lecture 13

#include<bits/stdc++.h>
using namespace std;

int main()
{

	string declear->>
	// string s;
	// cin>>s;
	// cout<<s<<endl;


	// string s;
	// string s1(5,'n')
	// cout<<s1<<endl;

	string s="apnimother";
	cout<<s;


	string s;
	getline(cin,s);
	cout<<s<<endl;



	string s1="fam";
	string s2="ily";

	s1.append(s2);

	or we can use s1+s2;

	or s1[1];

	string abs="dfjvbsjbvijfjvbskjv";
	abc.clear();


	string s1="abs";
	string s2="xyz";

	cout<<s2.compare(s1);
	cout<<endl;

	s2.empty();

	s1.erase();

	s1="dshvbdhfvb";

	s1.find("dsh");//show the first index;

	string s1="mynameistonoy";

	s1.insert(2,"loop");

	making substring


	s= s1.substr(6,8);


	convert integer

	string s3="786";
	int x=stoi(s1);

	cout<<x+2<<endl;

}



string challanges ->

string convert upper to lower conv-

int main()
{
	string str="mynameistonoy";

	for(int i=0; i<str.size(); i++)
	{
		if(str[i]>='a'&& str[i]<=z)
		{
			str[i]-=32;
		}
	}
	cout<<str<<endl;
}

int main()
{
	string str="MYNAMEISTONOY";

	for(int i=0; i<str.size(); i++)
	{
		if(str[i]>='A'&& str[i]<=Z)
		{
			str[i]+=32;
		}
	}
	cout<<str<<endl;
}

int main()
{
	string str="mynameistonoy"

	transform(str.begin(),str.end(), str.begin(), ::tolower);
	cout<<str<<endl;
}

frequence of an string characters->

int main()
{
	string s="dksjbfksjdbfsd";

	int freq={0};

	for(int i=0;i<s.size(); i++)
	{
		// if(s[i]>='a'&&s[i]<=z)
		// {
			freq[s[i]-'a']++;
		// }
		// else
		// {
		// 	freq[s[i]-'A']++;
		// }
	}
	char ans='a';
	//char ans1='A';
	int maxf=0;'
	for(int i=0; i<26; i++)
	{
		if(freq[i]>=maxf)
		{
			maxf=freq[i];
			ans=i+'a';
		}
	}

	cout<<maxf<<" "<<ans<<endl;
}
