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
    int n;cin>>n;
    vector<pair<int,int>>v;
    set<int>tm;
    int t1,t2,mx=0,mi=INT_MAX;
    while(n--){
        int a,x;cin>>a>>x;
        if(a==1){
        mx=max(mx,x);
       }
       if(a==2){
         mi=min(mi,x);
       }
       if(a==3){
       tm.insert(x);
       }
    }
    int cnt=0,t=mx;
    for(auto e : tm){
        if(e>=mx && e<=mi)cnt++;
    }
    if(mx>mi){
        cout<<0<<endl;return;
    }
    
    ll ans=mi-mx;
    ans+=2;
    ans-=cnt;
    cout<<ans-1<<endl;
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