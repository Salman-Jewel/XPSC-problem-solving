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
template <typename T> using o_set = tree<T, null_type, greater<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T> using o_set2 = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n; cin >> n;
  o_set<pair<int, int> > se;
  o_set2<pair<int,int> > se2;
  vector<int> v(n), front(n), back(n);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
    se.insert({v[i], i});
    front[i] = se.order_of_key({v[i], i});
  }
  reverse(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    se2.insert({v[i], i});
    back[n-i-1] = se2.order_of_key({v[i], i});
  }
  
  int ans = 0LL;
  for (int i = 0; i < n; i++) {
    ans += 1LL * front[i] * back[i];
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