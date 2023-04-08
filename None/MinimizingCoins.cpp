#include<bits/stdc++.h>
using namespace std;
int f(int n,int x,vector<int> &v,vector<int> &dp) {
   if(x<0) return -1;
   if(x==0) return 0;
   if(dp[x]!=-2) return dp[x];
   int ans=INT_MAX;
   for(int i=0;i<n;i++) {
      int y=f(n,x-v[i],v,dp);
      if(y!=-1) {
         ans=min(ans,y+1);
      }
   }
   if(ans==INT_MAX) {
      return dp[x]=-1;
   }
   else {
      return dp[x]=ans;
   }
}
int main() {
   int n,x;
   cin>>n>>x;
   vector<int> v(n);
   for(int i=0;i<n;i++) {
      cin>>v[i];
   }
   vector<int> dp(x+1,-2);
   cout<<f(n,x,v,dp);
}