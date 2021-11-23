#include<bits/stdc++.h>
using namespace std;
int count1(int i){
    int count=0;
    while(i){
        count+=i&1;
        i>>=1;
    }
    return count;
}
bool prime(int x){
    if(x<=1){
        return 0;
    }
    for(int i=2;i<=x/2;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}


int main(){
    int a,b;
    cin>>a>>b;
    int c=0;
    for(int i=a;i<=b;i++){
        int counter=count1(i);
        if(prime(counter)){
            c++;
        }
    }
    cout<<c;
}
