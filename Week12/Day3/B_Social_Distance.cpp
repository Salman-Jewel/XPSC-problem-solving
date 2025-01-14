#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n,m;cin>>n>>m;
   ll need=0;
   vector<ll>v(n);
   for(int i=0;i<n;i++){
     cin>>v[i];
   }
   sort(all(v));
   for(int i=0;i<n;i++){
      if(i==0){
         need+=(v[i]*2+1);
      }
      else if(i==n-1){
        need+=(v[i]-v[i-1]);
        need+=(v[i]-v[0]);
        need+=1;
      }
      else{
        need+=(v[i]-v[i-1]);
        need+=(v[i]+1);
      }
   }
   if(need<=m)cout<<"YES"<<nl;
   else cout<<"NO"<<nl;
}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    int _;cin >> _;
    while (_--){
       newbie();
    }
    return 0;
}