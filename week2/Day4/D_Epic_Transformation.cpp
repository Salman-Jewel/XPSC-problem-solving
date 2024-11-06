#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,x;cin>>n;
    vector<int>v(n);
     map<ll, ll>mp;
    ll mx = 0;
 
    for(int i = 0; i < n; i++){
        cin >> v[i];
        mp[v[i]]++;
        mx = max(mp[v[i]], mx);
    }
    if(mx > n / 2) {
        cout << mx * 2 - n <<nl;
    }
    else {
        if(n % 2) cout << 1 <<nl;
        else cout << 0 <<nl;
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