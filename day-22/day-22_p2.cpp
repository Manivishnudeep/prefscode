#include<bits/stdc++.h>
using namespace std;
int solve(int n,int arr[],int dp[]){
    if(n==0){
        return 0;
    }
    if(dp[n-1]!=-1){
        return dp[n-1];
    }
    int a=solve(n-1,arr,dp);
    int b=solve(n-2,arr,dp);
    return dp[n-1]=arr[n-1]+min(a,b);
}
int main(){
    int n;
    cin>>n;
    int arr[n],dp[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        dp[i]=-1;
    }
    solve(n,arr,dp);
    int c=min(dp[n-1],dp[n-2]);
    cout<<c;
    
    
}
