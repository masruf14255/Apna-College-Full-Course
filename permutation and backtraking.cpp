/*
            Bismillahir Rahmanir Rahim
            Read in the name of Allah, who created you!
            Al Mashruf Tonoy
            Department of CSE, Daffodil Internatinal University.

*/

// Permutation - Return all possible permutations | C++ Placement Course | Lecture 17

/*given an array nums of distict integers return all the possible permutation

you can return the answer in any order.*/

Permutations
An ordered arrangement of objects is called Permutations.

Permutation - 1

Given an array nums of distinct integers, print all the possible permutations.
Sample Test Cases:
Input: nums = [1,2,3]
Output: [[1,2,3],[1,3,2],[2,1,3],[2,3,1],[3,1,2],[3,2,1]]
Input: nums = [0,1]
Output: [[0,1],[1,0]]
Idea:
You are at index idx, try out all the possible swap, Ensuring that you don’t produce
duplicates.
Code:

#include "bits/stdc++.h"
using namespace std;
void solve(vector<int> &nums, vector<vector<int>> &ans, int idx) {
if (idx == nums.size()) {
ans.push_back(nums);
return ;
}
for (int i = idx; i < nums.size(); i++) {
swap(nums[i], nums[idx]);
solve(nums, ans, idx + 1);
swap(nums[i], nums[idx]);
}
}
vector<vector<int>> permute(vector<int> nums) {
vector<vector<int>> ans;
solve(nums,ans,0);
return ans;
}

int32_t main() {
vector<vector<int>> res = permute({1, 2, 3});
for (auto i : res) {
for (auto ii : i) {
cout << ii << " ";
}
cout << "\n";
}
}


Permutation - 2

Given a collection of numbers, nums, that might contain duplicates, print all
possible unique permutations in any order.
Sample Test Case:
Input: nums = [1,1,2]
Output:
[[1,1,2], [1,2,1], [2,1,1]]
Idea:
While swapping, avoid duplicates. I.e avoid swapping the same numbers.
Code:

#include "bits/stdc++.h"
using namespace std;
void solve(vector<int> nums, vector<vector<int>> &ans, int idx) {
if (idx == nums.size()) {
ans.push_back(nums);
return ;
}
for (int i = idx; i < nums.size(); i++) {
if(i != idx and nums[i]==nums[idx])
continue;
swap(nums[i], nums[idx]);
solve(nums, ans, idx + 1);
}
}
vector<vector<int>> permute(vector<int> nums) {
vector<vector<int>> ans;
sort(nums.begin(), nums.end());
solve(nums,ans,0);
return ans;
}

int32_t main() {
vector<vector<int>> res = permute({1, 2, 2,2,3});
for (auto i : res) {
for (auto ii : i) {
cout << ii << " ";
}
cout << "\n";
}
}

Permutations using STL

Next_permutation(start,end):
If the function can determine the next higher permutation, it rearranges the
elements as such and returns true. If that was not possible (because it is already
at the largest possible permutation), it rearranges the elements according to the
first permutation (sorted in ascending order) and returns false.
Code:

#include "bits/stdc++.h"
using namespace std;
vector<vector<int>> permute(vector<int> nums) {
vector<vector<int>> ans;
sort(nums.begin(), nums.end());
do {
ans.push_back(nums);
} while (next_permutation(nums.begin(), nums.end()));
return ans;
}
int32_t main() {
vector<vector<int>> res = permute({1, 2, 2});
for (auto i : res) {
for (auto ii : i) {
cout << ii << " ";
}
cout << "\n";
}
}

N-Queen Problem - Backtracking | C++ Placement Course - 18.2
N-Queen Problem - Backtracking | C++ Placement Course - 18.2
N-Queen Problem - Backtracking | C++ Placement Course - 18.2
N-Queen Problem - Backtracking | C++ Placement Course - 18.2
N-Queen Problem - Backtracking | C++ Placement Course - 18.2
N-Queen Problem - Backtracking | C++ Placement Course - 18.2

Recursion - IV (Backtracking)

N-Queen Problem
You have to place n queens on an nxn chessboard.
Idea: Try all the possible positions for the queen. isSafe functions check whether
the current position is safe or not.

Input:
A single integer n
Output:
n x n matrix, where one denotes queen, and 0 for an empty cell.
Test Case 1:
Input:
4
Output:
0 1 0 0
0 0 0 1
1 0 0 0
0 0 1 0

#include<bits/stdc++.h>
using namespace std;


bool isSafe(int** ,int x,int y,iny n)
{
    for(int row=0; row<x; row++)
    {
        if(arr[row][y]==1)
        {
            return false;
        }
    }

    int row=x;
    int col=y;
    while(row>=0&& col>=0)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col--;
    }
    row=x;
    col=y;
    while(row>=0 && col<n)
    {
        if(arr[row][col]==1)
        {
            return false;
        }
        row--;
        col++;
    }
    return true;
}



-------------------------

bool nQueen(int** arr,int x,int n)
{
    if(x>=n)
    {
        return true;
    }
    for(int col=0; col<n; col++)
    {
        if(isSafe(arr,x,col,n))
        {
            arr[x][col]=1;
            if(nQueen(arr,x+1,n))
            {
                return true;
            }
            arr[x][col]=0;
        }
    }
    return false;
}
