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
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   pbds<pair<int,int>>pb;
   int i=0,j=0;
   while(j<n){
       pb.insert({v[j],j});
       if(j-i+1==k){
          int mid=k/2;
          if(!(k&1))mid--;
          auto ele = pb.find_by_order(mid);
          cout<<ele->first<<" ";
          pb.erase({v[i],i});
          i++;
       }
       j++;
   }
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