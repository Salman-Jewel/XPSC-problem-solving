#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   multiset<ll>st;
   for(auto e : v){
      auto it = st.upper_bound(e);
      if(it!=st.end()){
        st.erase(it);
      }
      st.insert(e);
   }
   cout<<st.size()<<nl;
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