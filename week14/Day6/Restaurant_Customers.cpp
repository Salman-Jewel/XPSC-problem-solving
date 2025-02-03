#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
    vector<pair<int,int>>vp;
    for(int i=0;i<n;i++){
        int l,r;cin>>l>>r;
        vp.push_back({l,1});
        vp.push_back({r,-1});
    }
    
    sort(all(vp));
    int sum=0,ans=0;
    for(auto e : vp){
        sum+=e.second;
        ans=max(ans,sum);
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