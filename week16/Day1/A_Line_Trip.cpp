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
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,x;cin>>n>>x;
   vector<int>v(n);
   int ans=0;
   for(int i=0;i<n;i++){
      cin>>v[i];
      if(i==0){
         ans=max(ans,v[i]);
      }
      else if(i==n-1){
        ans=max(ans,v[i]-v[i-1]);
      }
      else{
        ans=max(ans,v[i]-v[i-1]);
      }
   }
   ans=max(ans,2*(x-v[n-1]));
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