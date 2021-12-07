/*
Raj and Bheem are using a Desktop Computer.One day they found that keyboard is 
defective in which if you type backspace button,it will print '$' , instead of 
removing one previous character.
Bheem and Raj have tried to type one word each on the same keyboard.
Return true, if both tried to type the same word.otherwise return false.

Note:backspace for an empty text will continue empty.

Input Format:
-------------
Line-1:Two space seperated strings represents words w1,w2.

 
Output Format:
--------------
Print a boolean result.
 
Constraints:

    1 <= w1.length, w2.length <= 200
    w1 and w2 only contain lowercase letters and '$' characters.


 
Sample Input-1:
---------------
pq$r  pt$r

Sample Output-1:
----------------
true

Explanation:
------------
Both wants to type 'pr'

Sample Input-2:
---------------
se$$at cea$$t

Sample Output-2:
----------------
false

Sample Input-3:
---------------
s$$at ce$$at

Sample Output-2:
----------------
true

Explanation:
------------
Both wants to type 'at'.
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string w1,w2;
    cin>>w1>>w2;
    
    stack<char> s1,s2;
    for(int i=0;i<w1.length();i++){
        if(w1[i]!='$'){
            s1.push(w1[i]);
        }
        else if(s1.size()==0){
            continue;
        }
        else{
            s1.pop();
        }
    }
    for(int i=0;i<w2.length();i++){
        if(w2[i]!='$'){
            s2.push(w2[i]);
        }
        else if(s2.size()==0){
            continue;
        }
        else{
            s2.pop();
        }
    }
    if(s1==s2){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
