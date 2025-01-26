#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    vector<ll>v(n),H(n);
    map<ll,ll>mp;
    ll s=0;
    for(int i=0;i<n;i++){
        cin>>v[i];
        s+=v[i];
        mp[v[i]]++;
    }
    if((2*s)%n!=0){
        cout<<0<<nl;return;
    }
    ll x=(2*s)/n;
    ll cnt=0;
    for(int i=0;i<n;i++){
        ll p=x-v[i];
        if(mp[p])cnt+=(mp[p]);
        if(p==v[i])cnt--;
    }
    cout<<cnt/2<<nl;  
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