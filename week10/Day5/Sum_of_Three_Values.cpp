#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n,x;cin>>n>>x;
   vector<pair<ll,ll>>v(n);
   for(int i=0;i<n;i++){
    cin>>v[i].first;
    v[i].second=i+1;
   }
   sort(all(v));
   for(int i=0;i<n;i++){
      ll tar=x-v[i].first;
      ll l=i+1,r=n-1;
      while(l<r){
        ll sum=v[l].first+v[r].first;
        if(sum==tar){
            cout<<v[i].second<<" "<<v[l].second<<" "<<v[r].second<<nl;return;
        }else if(sum<tar){
            l++;
        }
        else{
            r--;
        }
      }
   }
   cout<<"IMPOSSIBLE"<<nl;
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