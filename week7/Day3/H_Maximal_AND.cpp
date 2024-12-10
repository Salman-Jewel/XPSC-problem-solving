#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,k;cin>>n>>k;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   map<int,int>mp;
   for(int i=0;i<n;i++){
        for(int j=30;j>=0;j--){
            if((1<<j)&v[i])mp[j]++;
        }
   }
   ll ans=0;
   for(int i=30;i>=0;i--){
       int need=n-mp[i];
       if(need<=k){
            ans+=(1<<i);
            k-=need;
       }
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