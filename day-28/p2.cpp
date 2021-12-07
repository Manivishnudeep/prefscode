/*
There are some balls in a row, the balls are numbered from -1000 to +1000.
You need do arrange the balls in a such way that, 
the numbers on the balls in the row, should be in ascending order.
You are allowed to remove few balls in the row, 
but you are not allowed to shuffle their position.

Given an set of integers, numbers printed on the balls. 
Your task is to find the length of longest ascending arrangement of 
the numbered balls in the row.

Input Format:
-------------
Line-1: An integer N represents number of balls.
Line-2: Space separated integers, numbers printed on the balls in a row.

Output Format:
--------------
Print an integer, length of longest ascending arrangement of the numbered balls.
 
Sample Input-1: 
-------------
8
10 9 2 5 3 7 101 18

Sample Output-1: 
--------------
4 

Explanation: 
-------------
The longest ascending arrangement is [2,3,7,101], therefore the length is 4. 
 
 
Sample Input-2: 
-------------
6
0 1 0 1 0 1
  
Sample Output-2: 
--------------
2
 
Explanation: 
-------------
The longest ascending arrangement is [0, 1], therefore the length is 2. 
*/
#include<bits/stdc++.h>
using namespace std;

int maxlen(int arr[],int n){
    int dp[n];
    dp[0]=1;
    int max=0;
    for(int i=1;i<n;i++){
        dp[i]=1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j] && dp[i]<dp[j]+1){
                dp[i]=dp[j]+1;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(dp[i]>max){
            max=dp[i];
        }
    }
    return max;
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=maxlen(arr,n);
    cout<<m;
}
