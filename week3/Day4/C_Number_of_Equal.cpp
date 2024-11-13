#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,m;cin>>n>>m;
    map<ll,ll>mp1,mp2;
    for(int i=0;i<n;i++){
        int x;cin>>x;
        mp1[x]++;
    }
    for(int i=0;i<m;i++){
        int x;cin>>x;
        mp2[x]++;
    }
    ll sum=0;
    for(auto e : mp1){
        sum+=(mp1[e.first]*mp2[e.first]);
    }
    cout<<sum<<nl;
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