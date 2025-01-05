#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,q;cin>>n>>q;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   sort(all(v));
   map<int,int>mp;
   for(int i=0;i<n;i++){
    if(mp[v[i]]==0)mp[v[i]]=i+1;
   }
   for(int i=1;i<=q;i++){
      int x;cin>>x;
      if(mp[x]==0)cout<<x<<" not found"<<nl;
      else cout<<x<<" found at "<<mp[x]<<nl;
   }
}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    int t;cin >> t;
     for(int i=1;i<=t;i++){
        cout<<"CASE# "<<i<<":"<<nl;
        newbie();
     }
    return 0;
}