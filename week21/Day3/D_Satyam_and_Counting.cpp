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
    map<int,int>mp0,mp1;
    vector<int>a,b;
    ll ans=0;
    for(int i=0;i<n;i++){
        int x,y;cin>>x>>y;
        if(y==0){
            a.push_back(x);
            mp0[x]=1;
        }
        else{
            b.push_back(x);
            mp1[x]=1;
        }
    }
    for(int i=0;i<a.size();i++){
        if(mp0[a[i]] && mp1[a[i]])ans+=(n-2);
    }
    //cout<<ans<<nl;
    for(int i=0;i<a.size();i++){
        if(mp1[a[i]+1] && mp0[a[i]+2])ans++;
    }
    for(int i=0;i<b.size();i++){
        if(mp0[b[i]+1] && mp1[b[i]+2])ans++;
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