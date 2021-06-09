/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/
6.1 Functions in C++ | Guaranteed Placement Course

#find the factorial of 2 numberes given as input----

void print(int num)
{
	cout<<num<<endl;
	return;
}
int add(int num1,int num2)
{
	print(num1);
	print(num2);
	int sum=num1+num2;
	return sum;
}
int main()
{
	int a=2;
	int b=3;
	cout<<add(a,b)<<endl;
	return 0;
}

6.2 Functions Challenges | C++ Guaranteed Course | Lecture 6.2

##print all prime numbers between 2 gives numberes->>




bool isPrime(int n)
{
	for(int i=2; i<=sqrt(n); i++)
	{
		if(num%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int a,b;
	cin>>a>>b;

	for(int i=a; i<=b;i++)
	{
		if(isPrime(i))
		{
			cout<<i<<endl;
		}
	}
}


###fibonacchi sequence




void fib(int n)
{
	int t1=0;
	int t2=1;
	int nt;

	for(int i=1; i<=n; i++)
	{
		cout<<t1<<endl;//0,1,1,2,3,5
		nt=t1+t2;//1,2,3,
		t1=t2;//1,1,2,
		t2=nt;//1,2,3
	}
	return;
}
int main()
{
	int n;
	cin>>n;

	fib(n);
	return 0;
}

#######factorial of a number->>>

int fact(int n)
{
	int f=1;
	for(int i=2; i<=n; i++)
	{
		f*=i;
	}
	return f;

}
int main()
{
	int n;
	cin>>n;
	int ans=fact(n);
	cout<<ans<<endl;
}


####calculate nCr___________>>>>>>>>


int fact(int n)
{
	int f=1;
	for(int i=2; i<=n; i++)
	{
		f*=i;
	}
	return f;

}

int main()
{
	int n,r;
	cin>>n>>r;
	int ans=fact(n)/(fact(r)*fact(n-r));
	cout<<ans<<endl;
	return 0;
}

####pascal triangle -------->>>>>


int fact(int n)
{
	int f=1;
	for(int i=2; i<=n; i++)
	{
		f*=i;
	}
	return f;

}

int main()
{
	int n;
	cin>>n;
	for(int i=0; i<=n; i++)
	{
		for(int j=0; j<=i; j++)
		{
			cout<<fact(i)/(fact(j)*(fact(i)*fact(i-j))<<" ";
		}
		cout<<endl;
	}
	return 0;
}

int sum(int n)
{
	int ans=0;
	for(int i=0; i<=n; i++)
	{
		ann+=i;
	}
	return ans;
}
sum of first n natural numbers---->>>>

int main()
{
	int n;
	cin>>n;
	cout<<sum(n)<<endl;
}

pythogorean triplet----------->>>>>>>>



bool check(int x,int y,int z)
{
	int a=max(x,max(y,z));
	int b,c;

	if(a==x)
	{
		b=y;
		c=z;
	}
	else if(a==y)
	{
		b=x;
		c=z;

	}
	else
	{
		b=x;
		c=y;
	}
	if(a*a == b*b+c*c)
		return true;
	else
		return false;

}
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(check(x,y,z))
	{
		cout<<"pythogorean triplet\n";
	}
	else
	{
		cout<<"Not pythogorean triplet\n";
	}
}

###########binary to decimal----->>>

int binaryToDecimal(int n)
{
	int ans=0;
	int  x=1;
	while(n>0)//101
	{
		int y=n%10;//1,0,1
		ans+=x*y;//1+0+4=5
		x*=2;//2,4,5
		n/=10;//10,1,_

	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<binaryToDecimal(n)<<endl;
}

int octToDecimal(int n)
{
	int ans=0;
	int  x=1;
	while(n>0)//101
	{
		int y=n%10;//1,0,1
		ans+=x*y;//1+0+4=5
		x*=8;//2,4,5
		n/=10;//10,1,_

	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<octToDecimal(n)<<endl;
}

int hexaToDecimal(string n)
{
	int ans=0;
	int x=1;
	int s=n.size();
	for(int i=s-1; i>=0; i--)
	{
		if(n[i]>='0' && n[i]<='9')
		{
			ans+=x*(n[i]-'0')
		}
		else if(n[i]>='A'&&n[i]<='F')
		{
			ans+=x*(n[i]-'A'+10);

		}
		x*=16;
	}

	return ans;
}
int main()
{
	string n;
	cin>>n;
	cout<<hexaToDecimal(n)<<endl;
}


int DecimalTobinary(int n)
{
	int ans=0;
	int  x=1;
	while(x<=n)
		x*=2;

		x/=2;

		while(x>0)
		{
			int lastdigit=n/x;
			n-=lastdigit*x;
			x/=2;
			ans=ans*10+lastdigit;
		}
		return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<DecimalTobinary(n)<<endl;
}

int DecimalToOct(int n)
{
	int ans=0;
	int  x=1;
	while(x<=n)
		x*=8;

		x/=8;

		while(x>0)
		{
			int lastdigit=n/x;
			n-=lastdigit*x;
			x/=8;
			ans=ans*10+lastdigit;
		}
		return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<DecimalToOct(n)<<endl;
}

int DecimalTohexa(int n)
{
	string ans="";
	int  x=1;
	while(x<=n)
		x*=16;

	x/=16;

	while(x>0)
	{
		int lastdigit=n/x;
		n-=lastdigit*x;
		x/=16;

		if(lastdigit<=9)
		{
			ans+=to_string(lastdigit);
		}
		else
		{
			char c='A'+lastdigit-10;
			ans.push_back(c);
		}
	}
	return ans;
}
int main()
{
	int n;
	cin>>n;
	cout<<DecimalToHexa(n)<<endl;
}
