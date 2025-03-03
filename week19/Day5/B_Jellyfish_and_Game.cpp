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
    ll n, m, k;
    cin >> n >> m >> k;
    vector<int> v(n);
    vector<int> v1(m);
 
    ll s = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        s += v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin >> v1[i];
    }
    
 
    for (int i = 1; i <= min(k,2-k%2); i++)
    {
        sort(all(v));
        sort(all(v1));
        if (i & 1)
        {
            if (v[0] < v1[m - 1])
            {
                s += v1[m - 1];
                s -= v[0];
                swap(v[0], v1[m - 1]);
            }
        }
        else
        {
            if (v1[0] < v[n - 1])
            {
                s -= v[n - 1];
                s += v1[0];
                swap(v1[0], v[n - 1]);
            }
        }
    }
    cout << s << nl;
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