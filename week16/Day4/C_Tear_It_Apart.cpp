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
   string s;cin>>s;
   int mx=INT_MAX,ans=INT_MAX;
   set<char>st;
   for(auto e : s)st.insert(e);
   for(auto ch : st){
        int cnt=0,m=0,div=0;
       for(auto e : s){
           if(e==ch){
                m=max(cnt,m);
                cnt=0;
           }
           else{
                //if(cnt==0)div++;
                cnt++;
           }
       }
       m=max(m,cnt);
       while(m>0){div++;m/=2;}
       //cout<<ans<<nl;
       ans=min(ans,div);
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