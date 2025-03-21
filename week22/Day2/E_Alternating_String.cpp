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
   int n;cin>>n;
   string s;cin>>s;
   int ans=0;
   if(n%2==1){
    unordered_map<char, int> pref[2], suf[2];

    // Initializing suffix map
    for (int i = n - 1; i >= 0; i--) {
        suf[i % 2][s[i]]++;
    }

    int res = n;

    for (int i = 0; i < n; i++) {
        suf[i % 2][s[i]]--;  // Reduce frequency in suffix

        int ans = n;
        for (int k = 0; k < 2; k++) {
            int mx = 0;
            for (char c = 'a'; c <= 'z'; c++) {
                mx = max(mx, suf[1 - k][c] + pref[k][c]);
            }
            ans -= mx;
        }

        res = min(res, ans);
        pref[i % 2][s[i]]++;  // Add to prefix map
    }

    ans=res;
   }
   else{
      map<char,int>ev,od;
      int e=0,o=0;
      for(int i=0;i<n;i++){
          if(i%2==0)ev[s[i]]++;
          else od[s[i]]++;
          e=max(e,ev[s[i]]);
          o=max(o,od[s[i]]);
      }
      o=(n/2)-o;
      e=(n/2)-e;
      ans=o+e;
   }
   cout<<ans<<nl;
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