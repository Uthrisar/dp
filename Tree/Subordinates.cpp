#include<bits/stdc++.h>
using namespace std;
void dfs(vector<vector<int>> &adj,vector<int> &dp,int s,vector<bool> &visited) {
   int ans=0;
   visited[s]=true;
   for(int x:adj[s]) {
      if(!visited[x]) {
         dfs(adj,dp,x,visited);
         ans+=1+dp[x];
      }
   }
   dp[s]=ans;
}

int main() {
   int n;
   cin>>n;
   vector<vector<int>> adj(n+1);
   int st=2;
   for(int i=0;i<n-1;i++) {
      int k;
      cin>>k;
      adj[k].push_back(st);
      st++;
   }
   vector<int> dp(n+1,0);
   vector<bool> visited(n+1,false);
   dfs(adj,dp,1,visited);
   for(int i=1;i<=n;i++) cout<<dp[i]<<"\t";
}