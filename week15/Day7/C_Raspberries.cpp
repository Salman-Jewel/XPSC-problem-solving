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
   ll n,k;
    cin>>n>>k;
    vector<ll> v(n);
    ll ans=INT_MAX,even=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]%2==0)even++;
        if(v[i]%k==0)ans=0;
        ans=min(ans,(k-(v[i]%k)));
    }
    if(k==4){
        if(even==1)ans=min(ans,1LL);
        else if(even>=2)ans=0;
        else ans=min(ans,2LL);
    }
    cout<<ans<<endl;
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