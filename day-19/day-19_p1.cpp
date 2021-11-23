#include<bits/stdc++.h>
using namespace std;
vector<int> par;
char find(char x){
    if(par[x - 'a'] == -1) return x - 'a';
    return par[x - 'a'] = find('a' + par[x - 'a']);
}

void unionn(char a, char b){
      int A = find(a);
      int B = find(b);
      if(A==B) return;
      if(A <B){
         par[B]=A;
      }else{
         par[A]=B;
      }
   }

int main(){
    string s1,s2,s3;
    cin>>s1>>s2>>s3;
    int n=s1.length();
    par= vector <int>(26, -1);
    for(int i = 0; i < s1.size(); i++){
         unionn(s1[i], s2[i]);
    }
    string s4= "";
    for(int i = 0; i < s3.size(); i++){
         s4+= find(s3[i])+'a';
    }
    cout<<s4;
}
