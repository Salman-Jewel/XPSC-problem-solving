#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n,q;cin>>n>>q;
   vector<ll>v(n),pre(n);
   for(int i=0;i<n;i++)cin>>v[i];
   sort(all(v),greater<ll>());
   pre[0]=v[0];
   for(int i=1;i<n;i++){
      pre[i]=pre[i-1]+v[i];
   }
   while(q--){
       ll x;cin>>x;
       ll lo=0,hi=n-1;
       while(lo<=hi){
           ll mid=(hi+lo)/2;
           if(pre[mid]==x){lo=mid,hi=mid;break;}
           else if(pre[mid]<x)lo=mid+1;
           else hi=mid-1;
       }
       if(lo==n)cout<<-1<<nl;
       else cout<<lo+1<<nl;
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