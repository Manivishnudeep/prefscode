#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],a1[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    while(true){
        int count=0;
        for(int i=0;i<n;i++){
            a1[i]=a[i];
        }
        for(int i=1;i<n-1;i++){
            if(a[i]>a[i-1] && a[i]>a[i+1]){
                a1[i]--;
            }
            else if(a[i]<a[i-1] && a[i]<a[i+1]){
                a1[i]++;
            }
            else{
                count++;
            }
        }
        if(count==n-2){
            break;
        }
        for(int i=0;i<n;i++){
            a[i]=a1[i];
        }
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
