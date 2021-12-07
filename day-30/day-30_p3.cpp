/*
A game show conducted for the kids between 8-12 years.The main moto of this game 
is to check the IQ level of the kids in few concepts related to Mathematics.

 Vedansh has participated in this competition, where he was given few variety of 
 chocolate bags, each variety has a unque price per chocolate. Now he was asked
 to find all possible ways to sell the chocolates  with given amount T.
  
Your task is to help Vedansh, to find all the possible ways of selling the 
variety of chacolates for a given amount, and print the count.

Input Format:
-------------
 Line-1: Two space separated integers N and T, N varieties, T is amount.
 Line-2: N space separated integers, price of each variety of chocolate.
 
Output Format:
 --------------
 Print an integer, number of possible ways.
 
Constraints
-----------
0 <= T <= 5000
1<=N<= 500
the answer is guaranteed to fit into signed 32-bit integer.


 Sample Input-1:
---------------
3 10
2 3 5
 
Sample Output-1:
----------------
4
 
Explanation:
------------
there are four ways to make up the amount:
10=5+5
10=5+3+2
10=3+3+2+2
10=2+2+2+2+2

Sample Input-2:
 ---------------
 2 8
 2 5
 
 Sample Output-2:
 ----------------
 1

Explanation:
------------
thereis only one way to make up the amount:
8=2+2+2+2

*/
#include<bits/stdc++.h>
using namespace std;
int ways(int arr[],int n,int t,vector<vector<int>>dp){
    if(t==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    if(dp[n][t]!=-1){
        return dp[n][t];
    }
    if(arr[n-1]<=t){
        dp[n][t]=ways(arr,n,t-arr[n-1],dp)+ways(arr,n-1,t,dp);
    }
    else{
        dp[n][t]=ways(arr,n-1,t,dp);
    }
    return dp[n][t];
    
}
int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> dp(n+1,vector<int>(t+1,-1));
    
    int m=ways(arr,n,t,dp);
    cout<<m;
}
