#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int f(vector<int> &a,int n,int x,vector<int> &dp){
   if(x==0) return 0;
   if(x<0) return -1;
   if(dp[x]!=-2) return dp[x];
   else {
      int ans=INT_MAX;
      for(int i=0;i<n;i++) {
         int val=f(a,n,x-a[i], dp);
         if(val!=-1) ans=min(ans,val+1);
      }
      if(ans==INT_MAX) return dp[x]=-1;
      else return dp[x]=ans;
   }
}
int main() {
   int n,x; cin>>n>>x;
   vector<int> c(n);
   for(int i=0;i<n;i++) cin>>c[i];
   vector<int> dp(x+1,-2);
   cout<<f(c,n,x,dp);
}