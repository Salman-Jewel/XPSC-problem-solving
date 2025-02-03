#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=200000;
const int M=1e9+7;
    
void newbie(){
   ll n,k,q;cin>>n>>k>>q;
   vector<int>v(N+2),a(N+2);
   for(int i=0;i<n;i++){
    ll l,r;cin>>l>>r;
    v[l]++;
    v[r+1]--;
   }
   for(int i=90;i<=101;i++){
   // cout<<v[i]<<" ";
   }
   for(int i=1;i<=N;i++){
      v[i]+=v[i-1];
      a[i]=a[i-1]+(v[i]>=k);
   }
   for(int i=0;i<q;i++){
    ll l,r;cin>>l>>r;
    cout<<a[r]-a[l-1]<<nl;
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