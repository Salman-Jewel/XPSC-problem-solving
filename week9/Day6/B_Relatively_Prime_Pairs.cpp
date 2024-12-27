#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll l,r;cin>>l>>r;
   ll n=(r-l+1)/2;
   vector<pair<int,int>>vp;
   for(int i=0;i<n;i++){
      vp.push_back({l,l+1});
      l+=2;
   }
   if(vp[n-1].second<=l){
    cout<<"YES"<<nl;
    for(auto [x,y] : vp){
        cout<<x<<' '<<y<<nl;
    }
   }
   else{
    cout<<"NO"<<nl;
   }
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