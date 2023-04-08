#include <bits/stdc++.h>
using namespace std ;
const int mod = 1e9 + 7 ;

int main() {

   ios_base::sync_with_stdio(0) ;
   cin.tie(0) ;
   cout.tie(0) ;

   int n ;
   cin >> n ;
   vector<int> dp(n + 1 , 0) ;
   dp[0] = dp[1] = 1 ;

   for(int i = 2 ; i <= n ; i++) {
      for(int j = 1 ; j <= 6 ; j++) {
         if(j  > i) continue ;
         else {
            dp[i] = (dp[i] % mod + dp[i-j] % mod )% mod ;
         }
      }
   }

   cout << dp[n] % mod;
}