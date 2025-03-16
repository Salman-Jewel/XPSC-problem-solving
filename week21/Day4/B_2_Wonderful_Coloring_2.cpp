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
    int n, k;
    cin >> n >> k;
    
    vector<int> a(n), cnt(n);
    vector<int> p;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        a[i]--;
        cnt[a[i]]++;
        if (cnt[a[i]] <= k) {
            p.push_back(i);
        }
    }
    
    while (int(p.size()) % k != 0) {
        p.pop_back();
    }
    sort(p.begin(), p.end(), [&](int i, int j) { return a[i] < a[j]; });
    
    vector<int> ans(n);
    for (int i = 0; i < int(p.size()); i++) {
        ans[p[i]] = i % k + 1;
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " \n"[i == n - 1];
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