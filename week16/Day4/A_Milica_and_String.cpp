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
   int n,k;cin>>n>>k;
   string s;cin>>s;
   int cnt=count(all(s),'B');
   if(cnt==k){cout<<0<<nl;return;}
   else if(cnt<k){
       int a=0,b=cnt;
       for(int i=0;i<n;i++){
          if(s[i]=='B')b--;
          a++;
          if(a+b==k){
             cout<<1<<nl<<i+1<<" "<<'B'<<nl;return;
          }
       }
   }
   else{
       int b=0;
       for(int i=n-1;i>=0;i--){
          if(b==k){
            cout<<1<<nl<<i+1<<' '<<'A'<<nl;return;
          }
          if(s[i]=='B')b++;
       }
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