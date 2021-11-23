#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int min=n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(i==a[i]){
            if(i<min){
                min=i;
            }
            
        }
    }
    if(min==n){
        cout<<-1;
    }
    else{
        cout<<min;
    }
}
