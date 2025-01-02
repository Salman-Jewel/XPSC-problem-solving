#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n;cin>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   unordered_map<ll,ll>mp;
   ll presum=0,cnt=0;
   mp[0]=1;
   for(auto e : v){
      presum+=e;
      ll rem=((presum%n)+n)%n;
      if(mp.find(rem)!=mp.end()){
        cnt+=mp[rem];
      }
      mp[rem]++;
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