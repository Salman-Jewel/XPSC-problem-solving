#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll N=1e5+10;
const int M=1e9+7;
    
void newbie(){
   int n,m,q;cin>>n>>m>>q;
   vector<ll>v(N),d(N),l(N),r(N),x(N),op(N);
   for(int i=1;i<=n;i++)cin>>v[i];
   for(int i=1;i<=n;i++){
    d[i]=v[i]-v[i-1];
   }
   for(int i=1;i<=m;i++){
    cin>>l[i]>>r[i]>>x[i];
   }
   while(q--){
     int  l,r;cin>>l>>r;
     op[l]++;
     op[r+1]--;
   }
   for(int i=1;i<=m;i++){
    op[i]+=op[i-1];
   }
   for (int i = 1; i <= m; i++) {
    d[l[i]] += (x[i] * op[i]);
    d[r[i] + 1] -= (x[i] * op[i]);
  }
  for(int i=1;i<=n;i++){
    d[i]+=d[i-1];
    cout<<d[i]<<' ';
  }
  cout<<nl;

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