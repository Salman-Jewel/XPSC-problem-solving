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
    ll n, k;
    cin >> n >> k;
    
    vector<ll> v(n), c[k];
   
    for(ll i = 0; i < n; i++) {
      cin >> v[i];
      v[i]--;
      c[v[i]].push_back(i);
    }
   
    set<ll> st ;
    for(int i = 0; i < n; i++) st.insert(i);
   
    for(int i = 0; i < k; i++) {
      if(c[i].size() == 0) cout << 0;
      else {
        cout << 2 * (*st.rbegin() - *st.begin() + 1);
      }
      for(auto it : c[i]) {
        st.erase(it);
      }
      cout << " \n"[i == k - 1];
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