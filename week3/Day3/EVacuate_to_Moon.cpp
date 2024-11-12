#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    ll n,m,h;cin>>n>>m>>h;
    vector<ll>a(n),b(m);
    for(ll i=0;i<n;i++)cin>>a[i];
    for(ll i=0;i<m;i++)cin>>b[i];
    sort(all(a),greater<ll>());
    sort(all(b),greater<ll>());
    ll sum=0,i=0;
    while(i<min(n,m)){
        sum+=min(a[i],h*b[i]);
        i++;
    }
    cout<<sum<<nl;
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