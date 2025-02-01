#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,q;cin>>n>>q;
   vector<int>v(n),d(n+1);
   for(int i=0;i<n;i++)cin>>v[i];
   for(int i=0;i<q;i++){
      int l,r;cin>>l>>r;
      d[--l]++;
      d[(--r)+1]--;
    }
    for(int i=1;i<=n;i++){
        d[i]=d[i-1]+d[i];
    }
    sort(all(v),greater<int>());
    sort(all(d),greater<int>());
    ll ans=0;
    for(int i=0;i<n;i++){
        ans+=(1LL*d[i]*v[i]);
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