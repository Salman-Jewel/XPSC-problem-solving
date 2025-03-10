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
void dfs(int no,int par,vector<ll> v[],vector<ll> &dp){
    if(no !=1 && v[no].size()==1){
        dp[no]=1;return;
    }
    for(int child : v[no]){
           if(child != par){
            dfs(child,no,v,dp);
            dp[no]+=dp[child];
          }
    }
}  
void newbie(){
    int n;cin>>n;
    vector<ll>v[n+1],dp(n+1);
    for(int i=1;i<n;i++){
        int x,y;cin>>x>>y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    dfs(1,-1,v,dp);
    int q;cin>>q;
    while(q--){
        int x,y;
        cin>>x>>y;
        cout<<(dp[x]*dp[y])<<nl;
    }
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