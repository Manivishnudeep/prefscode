#include<bits/stdc++.h>
using namespace std;
char alternate(string a,char alt){
    int n=a.size();
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]!=alt){
            count++;
        }
        if(alt=='0'){
            alt='1';
        }
        else{
            alt='0';
        }
    }
    return count;
}
int minop(string s){
    int a=alternate(s,'0');
    int b=alternate(s,'1');
    return min(a,b);
}
int main(){
    string s;
    cin>>s;
    int c=minop(s);
    cout<<c;
}
