#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define speed ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<int>v(n);
   map<int,int>mp;
   int mx=0;
   for(int i=0;i<n;i++){
    cin>>v[i];
    mp[v[i]]++;
    mx=max(mx,mp[v[i]]);
   }
   int ans=0;
   while(mx<n){
      int p=min(n-mx,mx);
      ans+=(p+1);
      mx+=p;
   }
   cout<<ans<<nl;
}
    
int main()
{
    
    speed;
    int _;cin >> _;
    while (_--){
       newbie();
    }
    return 0;
}