/*
For Siddarth's Birthday his friends planned cake cutting.
On top of the cake there are two lines of candles, 
all the candles with different heights. 
The lines are parallel lines, line-P and line-Q .
Siddarth has to blow all the candles in one go.
 
So, he can swap one candle at a time, from P and Q and the position of the 
candles in their line should be same.

At the end of the swaps, The candles in set P and set Q, 
should be in ascending order of their heights.

You will be heights of the candles initially in P and Q, after placing in 
parallel lines.
 Your task is to find the minimum number of swaps required
to arrange the candles in P and Q in ascending orer.

Note: It is guaranteed that the answer is always possible.

Input Format:
-------------
Line-1: An integer N, num of candles in P and Q.
Line-2: N space separated integers, heights of the candles in Line-P.
Line-3: N space separated integers, heights of the candles in Line-Q.

Output Format:
--------------
 Print an integer, minimum number of swaps required.

Sample Input-1:
---------------
4
1 3 5 4
1 2 3 7

Sample Output-1:
----------------
1

Explanation:
------------
Swap the 4th candle in P and Q. 
Then the heights of the candles in P = [1, 3, 5, 7],  Q = [1, 2, 3, 4]
Both are in ascending order.
*/

#include<bits/stdc++.h>
using namespace std;

int minswaps(vector<int> a,vector<int> b){
    int n=a.size();
    int dp[n][2];
    dp[0][0]=0;
    dp[0][1]=1;
    for(int i=1;i<n;i++){
        dp[i][0]=dp[i][1]=INT_MAX;
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1] && b[i]>b[i-1]){
            dp[i][0]=dp[i-1][0];
            dp[i][1]=dp[i-1][1]+1;
        }
        if(a[i-1]<b[i] &&b [i-1]<a[i]){
            dp[i][0]=min(dp[i][0],dp[i-1][1]);
            dp[i][1]=min(dp[i][1],dp[i-1][0]+1);
        }
    }
    int res=min(dp[n-1][0],dp[n-1][1]);
    if(res==INT_MAX){
        return -1;
    }
    else{
        return res;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    vector<int> v2(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    for(int i=0;i<n;i++){
        cin>>v2[i];
    }
    int m=minswaps(v1,v2);
    cout<<m;
}
