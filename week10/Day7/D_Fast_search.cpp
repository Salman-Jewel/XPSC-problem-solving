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
   sort(all(v));
   int q;cin>>q;
   while(q--){
      ll r,l;cin>>r>>l;
      ll lo=0,hi=n-1;
      while(lo<=hi){
        ll mid=(hi+lo)/2;
        if(v[mid]<=l)lo=mid+1;
        else hi=mid-1;
      }
      ll a1=lo;
      lo=0,hi=n-1;
      while(lo<=hi){
        ll mid=(hi+lo)/2;
        if(v[mid]>=r)hi=mid-1;
        else lo=mid+1;
      }
      cout<<a1-lo<<' ';
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