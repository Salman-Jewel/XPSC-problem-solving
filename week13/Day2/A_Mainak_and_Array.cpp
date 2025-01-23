#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   int mx=0,mi=INT_MAX;
   vector<int>v(n);
   for(int i=0;i<n;i++){
       cin>>v[i];
   }
   int ans=v[n-1]-v[0];
   for(int i=1;i<n;i++){
    ans=max(ans,v[i-1]-v[i]);
   }
   for(int i=0;i<n-1;i++){
    ans=max(ans,v[n-1]-v[i]);
   }
   for(int i=1;i<n;i++){
    ans=max(ans,v[i]-v[0]);
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