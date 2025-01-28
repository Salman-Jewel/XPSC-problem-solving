#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
  int n,k;cin>>n>>k;
  vector<int> ans(n);
  int mx = n,mn = 1;
  for (int i = 0; i < k; i++) {
    if (i % 2 == 0) {
      for (int j = i; j < n; j += k) {
        ans[j] = mx;
        mx--;
      }
    }else {
      for (int j = i; j < n; j += k) {
        ans[j] = mn;
        mn++;
      }
    }
  }
  for(auto i:ans) cout << i << " ";
  cout << '\n';
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