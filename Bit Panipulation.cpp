/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

14.1 BIT Manipulation in 11 minutes | C++ Placement Course

//get operation


#include<bits/stdc++.h>
using namespace std;

int getBit(int n,int pos)
{
	return((n&(1<<pos))!=0);
}
int main()
{
	cout<<getBit(5,2)<<endl;
	return 0;
}

//set position setting (inserting one)

int setBit(int n,int pos)
{
	return (n| (1<<pos));
}
int main()
{
	cout<<setBit(5,1)<<endl;
	return 0;
}

//clearing this bit make it zero we do 1s complement

int clearBit(int n,int pos)
{
	int mask = ~(1<<pos);
	return (n&pos);
}
int main()
{
	cout<<clearBit(5,1)<<endl;
	return 0;
}


// update bit

int upgradeBit(int n,int pos,int value)
{
	int mask=~(1<<pos);
	n=n*mask;
	return (n| (value<<pos));
}
int main()
{
	cout<<upgradeBit(5,1,i)<<endl;
	return 0;
}


bit Manipulation questions ->

//write a program to check if a given
number is power of 2

#include<bits/stdc++.h>
using namespace std;


bool isPowerof2(int n)
{
	return (n& !(n&n-1));
}
int main()
{
	cout<<isPowerof2(16)<<endl;
}


// write a number to count the number of once in binary
representation of a number

int numberofones(int n){
	int count =0;
	while(n)
	{
		n=n&(n-1);
		count++;
	}
	return count;

}
int main()
{
	cout<<numberofones(19)<<endl;
	return 0;
}

// we need to generate all possible subset of a set
{a,b,c}



void subset(int a[],int n)
{
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<n; j++)
		{
			if(i&(i<<j))
			{
				cout<<a[j]<<" "
			}
		}cout<<endl;
	}
}
int main()
{
	int a[4]={1,2,3,4};
	subset(a,4);
	return 0;
}

write a program to find unique number in an array
where all numbers except one are present twice

int unique(int a[],int n)
{
	int xorsum=0;
	for(int i=0; i<n; i++)
	{
		xorsum=xorsum^a[i];
	}
	return xorsum;
}

int main()
{
	int a[]={1,2,3,4,1,3,2}
	cout<<xorsum(a,7)
	return 0;
}

write a program to find 2 unique number in an array
where all numbers except 2 are present twice

int setBit(int a[],int pos)
{
	return ((n& (1<<pos))!=0);
}

int unique(int a[],int n)
{
	int xorsum=0;
	for(int i=0; i<n; i++)
	{
		xorsum=xorsum^a[i];
	}
	int setBit=0;
	int pos=0;
	while(setBit!=1)
	{
		setBit=xorsum&1;
		pos++;
		xorsum=xorsum>>1;
	}
	int newxor=0;
	int tempxor=xorsum;
	for(int i=0; i<n;i++)
	{
		if(setBit(arr[i],pos-1))
		{
			newxor=newxor^ar[i];
		}
	}
	cout<<newxor<<endl;
	cout<<(tepxor^newxor)<<endl;
}
int main()
{
	int a[]={1,2,3,4,5,6,4,3,2,1}
	return 0;
}

//write a program to find unique number in an array
where all numbers except 1 are present 3 times

bool getBit(int n,int pos)
{
	return ((n&(1<<pos))!=0);
}


itn setBit(int n,int pos)
{
	return (n|(1<<pos));
}
int unique(int a[],int n)
{
	for(int i=0; i<64; i++)
	{
		int sum=0;
		for(int j=0; j<n; j++){
			if(getBit(a[j],i))
			{
				sum++:
			}
		}
		if(sum%2==0)
		{
			result=setBit(result,i)
		}
	}
	return result;
}

int main()
{
	int a[]={1,2,3,4,1,2,3,1,3,4}
	return 0;
}
