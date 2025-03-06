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
    int n,m;cin>>n>>m;
    map<int,set<int>>mp;
    for(int i=0;i<m;i++){
        int u,v;cin>>u>>v;
        mp[u].insert(v);
        mp[v].insert(u);
    }
    int x=0,y=0,leaf=-1,leafPar=-1;
    for(auto [a,b] : mp){
        if(mp[a].size()==1){
            leaf=a;break;
        }
    }
    for(auto [a,b] : mp){
        if(mp[a].find(leaf) != mp[a].end()){
            y=mp[a].size()-1;
            leafPar=a;
            break;
        }
    }
    for(auto [a,b] : mp){
        if(mp[a].find(leafPar) != mp[a].end() && mp[a].size()>1){
            x=mp[a].size();
            break;
        }
    }

    cout<<x<<" "<<y<<nl;
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