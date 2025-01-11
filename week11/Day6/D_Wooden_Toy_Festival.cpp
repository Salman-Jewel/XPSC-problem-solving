#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
bool is_possible(ll mid, vector<ll> &v) {
  ll cnt = 0;
  ll n = v.size();
  ll temp = INT_MAX;
  for(ll i = 0; i < n; i++) {
    if((abs(v[i] - temp) + 1) / 2 > mid) {
      cnt++;
      temp = v[i];
    }
    if(cnt > 3) return false;
  }
  return true;
 
}    
void newbie(){
    ll n;cin >> n;
  vector<ll>v(n);
  for(int i = 0; i < n; i++)cin >> v[i];
  sort(all(v));
  ll lo = 0, hi = *max_element(all(v));
  while(hi - lo > 1){
    ll mid = (lo + hi) / 2;
    if(is_possible(mid, v)) {
      hi = mid;
    }
    else lo = mid + 1;
  }
  if(!is_possible(lo, v)) lo = hi;
  cout << lo <<nl;
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