#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;    
void newbie(){
           ll n;
        cin >> n;
        vector<ll> v(n);
        for (auto &x : v)
        {
            cin >> x;
        }
        ll cnt = 0;
        pbds<ll> st;
        for (int i = n - 1; i >= 0; i--)
        {
            ll x = st.order_of_key(v[i]+1);
            st.insert(v[i]);
            cnt += x;
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