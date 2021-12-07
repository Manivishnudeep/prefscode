#include<bits/stdc++.h>
using namespace std;
int maxsum(vector<int> &arr, int i, int n,int dp[])
{
    if (i >= n){
        return 0;
    }
    if (dp[i]!=-1){
        return dp[i];
        
    }
    dp[i] = max(maxsum(arr, i + 1, n,dp),arr[i] + maxsum(arr, i + 2, n,dp));
    return dp[i];
}
int main(){
    int n,p;
    cin>>n;
    int arr[n];
    vector<int> v(100001,0);
    for(int i=0;i<n;i++){
        cin>>arr[i];
        v[arr[i]]+=arr[i];
    }
    int a=v.size();
    int dp[a];
    memset(dp,-1,sizeof(dp));
    cout<<maxsum(v,0,a,dp)<<endl;
    
}