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
   vector<int>a(n),b(n);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++)cin>>b[i];
   if(is_sorted(all(a)) && is_sorted(all(b))){
      for(auto e : a)cout<<e<<" ";
      cout<<nl;
      for(auto e : b)cout<<e<<' ';
      cout<<nl;
   }
   else if(is_sorted(a.rbegin(),a.rend()) && is_sorted(b.rbegin(),b.rend())){
       sort(all(a));
       sort(all(b));
       for(auto e : a)cout<<e<<" ";
       cout<<nl;
       for(auto e : b)cout<<e<<' ';
       cout<<nl;
   }
   else{
      map<int,int>mp;
      for(int i=0;i<n;i++){
        mp[a[i]]=b[i];
      }
      sort(all(a));
      for(auto e :a)cout<<e<<' ';
      cout<<nl;
      for(auto e : a)cout<<mp[e]<<' ';
      cout<<nl;
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