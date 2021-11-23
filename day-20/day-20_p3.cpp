#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    vector<string> mat;
    while(n--){
        string a;
        cin>>a;
        mat.push_back(a);
    }
    int flag=0;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[i].length();j++){
            if(mat[i][j]!=mat[j][i] or j>i-mat.size()){
                flag=1;
            }
        }
    }
    if(flag==0){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
}
