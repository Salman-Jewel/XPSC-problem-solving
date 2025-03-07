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
    int n;
    cin >> n;
    vector<int> p(n + 1), c(n + 1), s(n + 1);
    bool ok = false;
    for (int i = 1; i <= n; ++i)
    {
        cin >> p[i] >> c[i];
        s[i] = c[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        if (p[i] > 0)
 
            s[p[i]] &= c[i];
    }
    for (int i = 1; i <= n; ++i)
    {
        if (s[i])
        {
            cout << i << " ";
            ok = true;
        }
    }
    if (!ok)
        cout << -1;
 
    cout << nl;
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