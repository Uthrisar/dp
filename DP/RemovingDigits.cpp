#include <bits/stdc++.h>
using namespace std ;

int solve(int n , vector<int> &dp ) {
   vector<int> rem ;
   if(n == 0) return 1 ;
   if(n < 0) return 0 ;
   if(dp[n] != -2) return dp[n] ;
   int num = n ;
   while(num != 0) {
      rem.push_back(num % 10) ;
      num /= 10 ;
   }
   int ans = INT_MAX ;
   for(int i = 0 ; i < rem.size() ; i++) {
      int x = solve(n - rem[i] , dp) ;
      if(ans != -2) {
         ans = min(ans , x) ;
      }
   }
   rem.clear() ;
   if(ans == INT_MAX) return -2 ;
   else return dp[n] = ans ;
}

int main() {
   int n ; 
   cin >> n ;
   vector<int> dp(n+1 , -2) ;
   cout << solve(n, dp) ;
}