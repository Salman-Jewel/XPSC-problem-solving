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
    vector<ll>v(n+1);
    for (int i=1;i<=n;i++){
        cin>>v[i];
    }
    vector<pair<int,int>>vp;
    vector<long long>tm;
    int i=1,j=2;
    while(j<=n){
        if(v[i]!=v[j]){vp.push_back({i,j});}
        else{
            int k=i+1;
            while(k<=n){
                if(v[j]!=v[k] and j!=k){
                    vp.push_back({j,k});break;
                }
                k++;
            }
        }
        j++;
    }
    if(vp.size()!=n-1){
        cout<<"NO"<<nl;
    }
    else{
        cout<<"YES"<<nl;
        for(auto e : vp){
            cout<<e.first<<" "<<e.second<<nl;
        }
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