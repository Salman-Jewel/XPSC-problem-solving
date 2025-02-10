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
   ll n;
        cin >> n;
 
        vector<pair<ll, ll>> v(n);
        pbds<ll> st;
 
        for (int i = 0; i < n; i++)
        {
            ll a, b;
            cin >> a >> b;
            v[i] = {a, b};
            st.insert(b);
        }
 
        sort(v.begin(), v.end());
        ll cnt = 0;
        for (auto x : v)
        {
            ll a = x.first;
            ll b = x.second;
            ll ans = st.order_of_key(b);
            cnt += ans;
            st.erase(b);
        }
        cout << cnt << endl;
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