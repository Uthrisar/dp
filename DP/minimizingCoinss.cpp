#include <bits/stdc++.h>
using namespace std ;
 
int solve(vector<int> &a , int n , int x)
{
    vector<int> dp(x + 1) ;
    dp[0] = 0 ;
 
    for (int j = 1 ; j <= x ; j++)
    {
        int ans = INT_MAX ;
        for (int i = 0 ; i < n ; i++)
        {
            if (j - a[i] < 0)
                continue ;
 
            int val = dp[j - a[i]] ;
            if (val != -1)
                ans = min(ans , val + 1) ;
        }
 
        if (ans == INT_MAX)
            dp[j] = -1 ;
        else
            dp[j] = ans ;
    }
 
    return dp[x] ;
}
 
int main()
{
 
    int n , x ;
    cin >> n >> x ;
 
    vector<int> a(n);
    for (int i = 0 ; i < n ; i++)
        cin >> a[i] ;
 
    int ans = solve(a , n , x) ;
    cout << ans ;
 
    return 0 ;
}