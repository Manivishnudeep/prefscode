/*
Amazon is conducting a drive online for eligible candidates. The candidate, who 
scores highest points in online test and his/her points are atleast two times 
greater than all other individual candidate's points, will be shortlisted 
directly to HR round.

Given an array of points  points[], return the index position of the shortlisted
candidate.If no one exist return -1.

Input Format:
-------------
Line-1: An integer n number of candidates.
Line-2: n space separated integers represent the points scored by each candidate.
 
Output Format:
--------------
Print an integer.
 
Constraints:
 1 <= n <= 500
 1 <= points[i] <= 100

 
Sample Input-1:
---------------
5
4 8 2 1 3
 
Sample Output-1:
----------------
1

Explanation:
------------
8 is two times greater than all other values.
 
Sample Input-2:
---------------
6
2 4 6 18 18 5

Sample Output-2:
----------------
-1

Explanation:
------------
No candidate selected for HR round.
 
*/



#include<bits/stdc++.h>
using namespace std;
int findindex(int arr[], int len) {
    int maxindex = 0;
    for (int i = 0; i < len; ++i)
        if (arr[i] > arr[maxindex])
            maxindex = i;
    for (int i = 0; i < len; ++i)            
        if (maxindex != i &&
            arr[maxindex] < 2 * arr[i])
            return -1;
    return maxindex;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int m=findindex(arr,n);
    cout<<m;
}
