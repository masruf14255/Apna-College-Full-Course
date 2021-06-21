/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

//Backtracking - Rat in a Maze | C++ Placement Course | Lecture 18.1

#include<bits/stdc++.h>
using namespace std;


bool isSafe(int** arr,int x,int y,int n)
{
    if(x<n && y<n && arr[x][y]==1)
    {
        return true;
    }
    return false;
}

bool ratMaze(int** arr,int x,int y,int n, int** solution)
{


    if(x==n-1 && y==n-1)
    {
        solution[x][y]=1;
        return true;
    }


    if(isSafe(arr,x,y,n))
    {
        solution[x][y]=1;
        if(ratMaze(arr,x+1,y,n,solution))
        {
            return true;
        }
        if(ratMaze(arr,x,y+1,n,solution))
        {
            return true;
        }
        solution[x][y]=0;
        return false;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    int** arr=new int*[n];
    for(int i=0; i<n; i++)
    {
        arr[i]=new int[n];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }

    int** solution=new int*[n];
    for(int i=0; i<n; i++)
    {
        solution[i]=new int[n];
        for(int j=0; j<n; j++)
        {
            solution[i][j]=0;
        }
    }
    if(ratMaze(arr,0,0,n,solution))
    {
        for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<solution[i][j];
        }cout<<endl;
    }
    }
    return 0;
}
