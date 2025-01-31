#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   set<ll>st;
   sort(all(v));
   map<ll,ll>mp;
   ll ans=0;
   for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        ans=max(ans,++mp[(v[i]+v[j])]);
    }
   }
   cout<<ans<<nl;
}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    // int _;cin >> _;
    // while (_--){
        newbie();
    // }
    return 0;
}