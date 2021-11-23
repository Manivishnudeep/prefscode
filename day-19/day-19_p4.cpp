#include <bits/stdc++.h>
using namespace std;
 int findpar(int node,vector<int> &par){

    if(par[node]==node) return node;
    return par[node]=findpar(par[node],par);
}


void unionbyrank(int x,int y,vector<int> &par,vector<int> &rank){
    int u=findpar(x,par);
    int v=findpar(y,par);


    if(rank[u]>rank[v]){
        par[v]=u;
        rank[u]+=rank[v];

    }
    else if(rank[v]>rank[u]){
         par[u]=v;
         rank[v]+=rank[u];

    }
    else{
        par[v]=u;
        rank[u]+=rank[v];

    }
}
    string solve(string s, vector<vector<int>>& pairs) {

        int n=s.size();
        vector<int> par(n);
        vector<int> rank(n,0);


        for(int i=0;i<n;i++){
            par[i]=i;
        }


        for(auto x: pairs){
            unionbyrank(x[0],x[1],par,rank);
            unionbyrank(x[1],x[0],par,rank);
        }

        map<int,multiset<char>> mp;
        for(int i=0;i<n;i++){
           mp[findpar(i,par)].insert(s[i]);
        }

        string ans="";

        for(int i=0;i<n;i++){
            auto it=mp[findpar(i,par)].begin();
            ans+=*it;
            mp[findpar(i,par)].erase(it);
        }

        return ans;
    }

int main(){
    string a,b,t;
    cin>>t;
   vector<vector<int>> p;
   int n,j,k;
   cin>>n;
   for(int i=0;i<n;i++){
    cin>>j>>k;
    p.push_back({j,k});
   }
   cout<<solve(t,p)<<endl;

}
