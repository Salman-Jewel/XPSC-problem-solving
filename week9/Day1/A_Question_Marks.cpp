#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   string s;cin>>s;
   map<char,int>mp;
   for(auto e : s){
      mp[e]++;
   }
   ll ans=0;
   for(auto e : mp){
       if(e.first != '?')ans+=(min(e.second,n));
   }
   cout<<ans<<nl;
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