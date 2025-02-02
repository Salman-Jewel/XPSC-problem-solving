#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   map<ll,ll>mp;
   bool f=true;
   for(int i=0;i<n;i++){
    ll l,r;cin>>l>>r;
      mp[l]++;
      mp[r+1]--;
   }
   ll sum=0;
   for(auto e : mp){
    sum+=e.second;
    if(sum>2)f=false;
   }
   if(f)cout<<"YES"<<nl;
   else cout<<"NO"<<nl;
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