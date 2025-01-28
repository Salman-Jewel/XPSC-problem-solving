#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n;
    cin >> n;
    vector<ll> v(n);
    for(ll i = 0;i<n;i++)
        cin >> v[i];
    for(ll i = 0;i<n-1;i++){
        ll xr = 0,pos = 0;
        bool chk = 0;
        for(ll j = 0;j<=i;j++)
            xr ^= v[j];
        for(ll j = i + 1;j<n;j++){
            pos ^= v[j];
            if(pos == xr){
                chk = 1;
                pos = 0;
            }
        }
        if(pos == 0 and chk == 1)
        {
            cout<<"YES"<<nl;return;
        }
    }
    cout<<"NO"<<nl;
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