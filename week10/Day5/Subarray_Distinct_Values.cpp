#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n,k;cin>>n>>k;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   unordered_map<ll,ll>mp;
   ll i=0,j=0,cnt=0;
   while(j<n){
      mp[v[j]]++;
      while(mp.size()>k){
         mp[v[i]]--;
         if(mp[v[i]]==0){
            mp.erase(v[i]);
         }
         i++;
      }
      cnt+=(j-i+1);
      j++;
   }
   cout<<cnt<<nl;
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