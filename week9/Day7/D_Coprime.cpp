#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,x;cin>>n;
   map<int,int>mp;
   for(int i=1;i<=n;i++){
    cin>>x;mp[x]=i;
   }
   int ans=-1;
   for(auto [x,y] : mp){
      for(auto [a,b] : mp){
         if(__gcd(x,a)==1){
            ans=max(ans,y+b);
         }
      }
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