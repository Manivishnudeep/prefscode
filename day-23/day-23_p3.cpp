#include<bits/stdc++.h>
using namespace std;
string palindrome(string s){
    int n=s.length(),m=0,a,b;
    vector<vector<bool>> dp(n, vector<bool>(n, false));
    for(int m=0;m<n;m++){
        for(int i=0,j=m;j<n;i++,j++){
            if(m==0){
                dp[i][j] = true;
            }
            else if(m==1) {
                if(s[i] == s[j]){
                    dp[i][j] = true;
                }
                else{
                    dp[i][j] = false;
                }
            }
            else{
                if(s[i]==s[j] && (dp[i+1][j-1]==true)){
                    dp[i][j]=true;
                }
                else{
                    dp[i][j]=false;
                }
            }
            if(dp[i][j]==true){
                a=i;
                b=j;
            }
        }
    }
    string ans;
    for(int i=a;i<=b;i++){
        ans.push_back(s[i]);
    }
    return ans;
    
}
int main(){
    string s;
    cin>>s;
    cout<<palindrome(s);
}