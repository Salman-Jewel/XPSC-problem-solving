#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;    
void newbie(){
       ll n;
    cin >> n;
    string str;
    cin >> str;
    string r = str;
    reverse(r.begin(), r.end());
    map<char, vector<ll>> pos_s, pos_r;
    for (int i = 0; i < n; i++){
        pos_s[str[i]].push_back(i);
        pos_r[r[i]].push_back(i);
    }
    vector<ll> v2(n);
    for (char ch = 'a'; ch <= 'z'; ch++)
    {
        for (int i = 0; i < pos_s[ch].size(); i++)
        {
            v2[pos_r[ch][i]] = pos_s[ch][i];
        }
    }
    pbds<ll> p;
    ll ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        ans += p.order_of_key(v2[i]);
        p.insert(v2[i]);
    }
    cout << ans << endl;

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