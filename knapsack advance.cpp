/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

Recursion | Last Lecture on Advanced Problems | Lecture 16.4

// tiling problem

int tilingWays(int n)
{
    if(n==0)
    {
        return 0;
    }
    if(n==1)
    {
        return 1;
    }

    return tilingWays(n-1)+tilingWays(n-2);
}

int main()
{
    return 0;
}

// friends pairing problem

int friendsPairing(int n)
{
    if(n==0 || n==1 || n==2)
    {
        return n;
    }

    return friendsPairing(n-1)+friendsPairing(n-2)*(n-1);
}

int main()
{
    cout<<friensPairing(4)<<endl;
}

// 0-1 knapsack problem


int knapsack(int value[],int wt[],int n,int W)
{

if(n==0 || W==0)
{
    return;
}

if(wt[n-1]>W)
{
    return knapsack(value,wt,n-1,W);
}

    return max(knapsack(value,wt,n-1,W-wt[n-1])+value[n-1],
        knapsack(value,wt,n-1,W););

}
int main()
{

    int wt[]={10,20,30};
    int value={100,50,150};
    int W=50;

    cout<<knapsack(wt,value,3,W)<<endl;
    return 0;
}
