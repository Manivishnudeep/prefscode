/*
Varun and Srujan are playing a word game. Srujan has given a word of length N 
and a character(ch) which exist in the word.
Now Varun's task is to find the smallest distance of the given character in the
word for each position in the word.

Help Varun to return an array result[] where result.length==N and result[i] is 
the smallest distance from the given character to index i in the word.

The distance between two indices i and j is abs(i - j) , where abs is the 
absolute value function.

Input Format:
-------------
Line-1: A string represents a word
Line-2: a character ch which exist in the word.
 
Output Format:
--------------
Print an array of N values
 
Constraints:
 1 <= word.length <= 10^4
word[i] and ch are lowercase English letters.
It is guaranteed that 'ch' occurs at least once in word .

 
Sample Input-1:
---------------
conclude
c
 
Sample Output-1:
----------------
0 1 1 0 1 2 3 4

 
Sample Input-2:
---------------
kmitngit
i

Sample Output-2:
----------------
2 1 0 1 2 1 0 1 

 
*/


#include<bits/stdc++.h>
using namespace std;

void shortestdistance(string s1,char c){
    vector<int> ans;
    int prev=INT_MAX;
    
    
    for (int i = 0; i < s1.length(); i++){
        if (s1[i] == c)
            prev = i;
        if (prev == INT_MAX)
            ans.push_back(INT_MAX);
        else
            ans.push_back(i - prev);
    }
    
    prev = INT_MAX;
    for (int i = s1.length() - 1; i >= 0; i--)
    {
        if (s1[i] == c)
            prev = i;
         if (prev != INT_MAX)
            ans[i] = min(ans[i], prev - i);
    }
    for(int i=0;i<s1.length();i++){
        cout<<ans[i]<<" ";
    }
}


int main(){
    string s;
    char ch;
    cin>>s;
    cin>>ch;
    shortestdistance(s,ch);
}
