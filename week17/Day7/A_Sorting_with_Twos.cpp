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
    cin>>n;
    vector<int>v(n+1);
    for(int i=1;i<=n;i++)cin>>v[i];
    if(is_sorted(v.begin(),v.end())){
        cout<<"YES"<<nl;return ;
    }
    int m=3;
    for(int i=2;(1<<i)<=n;i++){
      int j=(1<<i);
      for(int k=j;k>m;k--){
        if(v[k-1]>v[k]){
          cout<<"NO"<<nl;return ;
        }
      }
      m=j+1;
    }
    for(int i=n;i>m;i--){
      if(v[i-1]>v[i]){
        cout<<"NO"<<nl;return ;
      }
    }
    cout<<"YES"<<nl;
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