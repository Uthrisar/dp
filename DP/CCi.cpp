#include <bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;
int f( vector<int> &dp, int n, int x, vector<int> &v ) {
   if( x == 0 ) return 1;
   if( x < 0 ) return 0;
   if( dp[x] != -1 ) return dp[x];
   int ans = 0;
   for( int i=0; i<n; i++ ) {
      ans + = f( dp ,n, x-v[i], v );
      ans % = mod;
   }
   return dp[x] = ans;
}

int main(){
   int n, x;
   cin >> n >> x;
   vector<int> v(n);
   for(int i=0; i<n; i++) cin >> v[i];
   vector<int> dp(x+1, -1);
   cout<<f( dp, n, x, v );
 }
