#include<bits/stdc++.h>
using namespace std;
int  f(int n,vector<int> &dp) {
   if(n==0) return 1;
   if(n<0) return 0;
   if(dp[n]!=-2) return dp[n];
   int ans=0;
   for(int i=1;i<=6;i++) {
      ans+=f(n-i,dp);
   }
   return dp[n]=ans;
}
int main() {
   int n; 
   cin>>n;
   vector<int> dp(n+1,-2);
   cout<<f(n,dp);
}