// basic diagram to implement depth first search 

#include<bits/stdc++.h>
using namespace std;
int n=100000007;
vector<int> g(n);
int dfs(int vertex,vector<bool> &vis) {
    vis[vertex]=true;
    // take action on vertex after entering the vertex .
    for(int child:g[vertex]) {
       if(vis[child]) continue;
       // take action on child before entering the child node.
       dfs(child,vis);
      // take action on child after exiting child node.
   }
    // take action on vertex before exiting the vertex
 }

int main() {
   int n,e;
   cin>>n>>e;
   vector<bool> vis(n+1,false);

   for(int i=0;i<e;i++) {
      int x,y;
      cin>>x>>y;
      g[x].push_back(y);
      g[y].push_back(x);
   }
   int ct=0;
   for(int i=1;i<=n;i++) {
      if(vis[i]) continue;
      dfs(i,vis);
      ct++;
   }
   cout<<ct<<endl;
}