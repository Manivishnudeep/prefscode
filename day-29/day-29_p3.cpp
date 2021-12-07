/*
 A Magic box has cells with p rows and r columns.Each cell is initially empty
 (represented by 0).
You are given a 'c' set of cells cell[][] and the box should be filled with 
gold coins as follows.
	-For each given cell (i,j) , Add 1 gold coin for each cell starting 
	from (0,0) to 	 (i-1,j-1).

Your task is to return the number of cells with maximum number of gold coins 
after performing 'c' operations.

Input Format:
-------------
Line-1: Two space seperated integers represents p,r.
Line-2: An integer represents 'c'.
Next c Lines: Two-space separated integers representa cell.
  
Output Format:
--------------
 Print an integer value.
   
 Sample Input-1:
 ---------------
4 4
3
4 3
1 3
1 2
  
Sample Output-1:
----------------
2

Explanation:
------------
Look Hint for explanation.
   
Sample Input-2:
---------------
2 2
1
1 2
  
Sample Output-2:
----------------
2


*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    int r,c,m,n;
    int a;
    cin>>r>>c;
    cin>>a;
    int arr[a];
    int minx=r,miny=c;
    for(int i=0;i<a;i++){
        cin>>m>>n;
        if(m<minx){
            minx=m;
        }
        if(n<miny){
            miny=n;
        }
    }
    cout<<minx*miny;
}
