/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

15.2 Inclusion- Exclusion Principle | GCD | C++ Placement Course

n1,n2,n3

total students=n1+n2-n3;


// how many numbers between 1 and 1000 are
divisiable bt 5 or 7?
#include<bits/stdc++.h>
using namespace std;

int divisible(int n,int a,int b)
{
    int c1=n/a;
    int c2=n/b;

    int c3=n/(a*b);

    return c1+c2-c3;

int main()
{
    int n,a,b;
    cin>>n>>a>>b;

    cout<<divisible(n,a,b)<<endl;
    return 0;
}
// Euclid algorithm to find GSD


int gcd(int a,int b)
{
    while(b!=0)
    {
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}

int main()
{
    int a,b;
    cin>>a>>b;
    cout<<gcd(a,b)<<endl;

    return 0;
}
