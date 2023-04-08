#include<bits/stdc++.h>
using namespace std;
int main() {
   int n;
   cin>>n;
   int x[n];
   for(int i=0;i<n;i++) cin>>x[i];
   sort(x,x+n);
   int count=1;
   for(int i=1;i<n;i++) {
      if(x[i]!=x[i-1]) count++;
   }
   if(n==0) cout<<n;
   else cout<<count;
}