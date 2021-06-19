/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

16.1 Recursion - Introduction | C++ Placement Course

#include<bits/stdc++.h>
using namesapce std;

int sum(int n)
{

    if(n==0)
        {
         return 0;
        }
    int prevSum=Sum(n-1);
    return n+prevSum;

}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n)<<endl;
}

// calculate n raised to power of p

#include<bits/stdc++.h>
using namesapce std;

int power(int n,int p)
{

    if(n==0)
        {
         return 1;
        }
    // int prevpower=power(p-1);
    // return n*prevpower;

        return n*power(p-1);

}
int main()
{
    int n,p;
    cin>>n>>p;
    cout<<power(n,p)<<endl;
}



// fibonacci

int fibo(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }
    return fibo(n-1)+fibo(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}


// recursion challanges---->>>>>

//check if an array is sorted or not

bool sorted(int a[],int n)
{
    if(n==1)
    {
        return true;
    }
    bool restArray=sorted(a+1,n-1);
    return (a[0]<a[1] && restArray);
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
    cout<<sorted(a,n);
}

// print numbers decreasing and increasing numbers


void dec(int n)
{
    if(n==0)
    {
        return;
    }
    cout<<n<<endl;
    dec(n-1);

}

int main()
{
    int n;
    cin>>n;

    dec(n);
    return 0;
}


// find the first and last occurence of a number
in an array


int find(int a[],int n,int i,int key)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i]==key)
    {
        return i;
    }

    return find(a,n,i+1,key);
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
    int x;
    cin>>x;
    cout<<find(a,n,0,x)
    return 0;

}

// recursion important questions

// reverse a string

void reverse(string s)
{
    if(s.length()==0)
    {
        return;
    }
    string ros=s.substr(1);
    reverse(ros);
    cout<<s[0];
}

int main()
{
    string s;
    cin>>s;
    reverse(s);
    return 0;
}

// pippppiiiipi
void replacePi(string s)
{
    if(s.length()==0)
    {
        return;
    }
    if(s[0]=='p' && s[1]=='i')
    {
        cout<<"3.14"
        replacePi(s.substr(2));
    }
    else
    {
        cout<<s[0];
        replacePi(s.substr(1))
    }
}

int main()
{
    replacePi("pippppiiiipi");
    return 0;
}

//
void towerofHanoi(int n,char src,char dest,char
    helper)
{
    if(n==0)
    {
        return;
    }

    towerofHanoi(n-1,src,helper,dest);
    cout<<"Move from "<<src<<" to "<<dest<<endl;
    towerofHanoi(n-1,helper,dest,src);
}

int main()
{
    towerofHanoi(3,'A','C','B');
    return 0;
}

//remove duplicate from string


string rd(string s)
{
    if(s.length()==0)
    {
        return "";
    }

    char ch=s[0];
    string ans =rd(s.substr(1));

    if(ch==ans[0])
    {
        return ans;
    }
    return (ch+ans);

}
int main()
{
    cout<<rd("sdhfbsdhbvdshbvdhfvhzdf");
    return 0;
}

// move all x to end of the string

string moveallx(string s)
{
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans=moveallx(s.substr(1));

    if(ch=='x')
    {
        return ans+ch;
    }
    return ch+ans;

}

int main()
{
    cout<<moveallx("shadiuxaxhaxihaxxx");
    return 0;
}

// print all possible sub strings


void substring(string s, string ans)
{

    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    string ros=s.substr(1);

    substring(ros,ans);
    substring(ros,ans+ch);
}

int main()
{
    cout<<substring("ABC","")<<endl;

    return 0;
}

// print all possible sub strings with ascii
value


void substring(string s, string ans)
{

    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch=s[0];
    int code=ch;
    string ros=s.substr(1);

    substring(ros,ans);
    substring(ros,ans+ch);
    substring(ros,ans+to_string(code));
}

int main()
{
    cout<<substring("ABC","")<<endl;

    return 0;
}

// prints all possible words from phone
digits

string keypad[]={"","","abc","def","ghi","jkl","mno",
"pqrs","tuv","wxyz"};
void keypadd(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch =s[0];
    string code=keypadd[ch-'0'];
    string ros=s.substr(1);

    for(int i=0; i<code; i++)
    {
        keypadd(ros,ans+code[i]);
    }
}

int main()
{
    keypadd("23","");

    return 0;
}

// print all possible permutations of a string

void permutation(string s,string ans)
{
    if(s.length()==0)
    {
        cout<<ans<<endl;
        return;
    }
    for(int i=0; i<s.length(); i++)
    {
        char ch=s[i];
        string ros=s.substr(0,i)+s.substr(i+1);

        permutation(ros,ans+ch);
    }
}

int main()
{
    permutation("ABC", "");
    return 0;
}

// count the number of paths posssible from start to
end point in gameboard



int countPath(int s,int e)
{
    if(s==e){
        return 1;
    }

    if(s>e)
    {
        return 0;
    }
    int count =0;
    for(int i=1; i<=6; i++)
    {
        count+=countPath(s+i,e);
    }
    return count;
}

int main()
{
    countPath(0,3);
}

// count the number of paths possible
in a maze

int countPathMaze(int n,int i,int j)
{
    if(i==n-1 && j==n-1){
        return 1;
    }
    if(i>=n || j>=n)
    {
        return 0;
    }
    return countPathMaze(n,i+1,j)+countPathMaze(n,i,j+1)
}

int main()
{
    countPathMaze(3,0,0);
    return 0;
}
