#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll x,n;cin>>x>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   set<ll>li;
   multiset<ll>len;
   li.insert(0);
   li.insert(x);
   len.insert(x);
   for(auto e : v){
    auto it = li.lower_bound(e);
    ll r = *it,l=*(--it);
    len.erase(len.find(r - l));
    len.insert(e - l);
    len.insert(r - e);
    li.insert(e);
    cout<<*len.rbegin()<<" ";
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
