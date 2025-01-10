#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<int>a(n);
   for(int i=0;i<n;i++)cin>>a[i];
   map<tuple<ll, ll, ll>, ll> cnt;
    ll ans = 0;
    for (ll i = 0; i < n - 2; i++) {
        tuple<ll, ll, ll> tri{a[i], a[i + 1], a[i + 2]};
        vector<tuple<ll, ll, ll>> mist(3);
 
        mist[0] = {0, a[i + 1], a[i + 2]};
        mist[1] = {a[i], 0, a[i + 2]};
        mist[2] = {a[i], a[i + 1], 0};
 
        for (auto& trip : mist) {
            ans += cnt[trip] - cnt[tri];
            cnt[trip]++;
        }
        cnt[tri]++;
    }
    cout << ans << nl; 
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