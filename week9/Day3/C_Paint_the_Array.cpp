#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
bool check1(vector<ll> v ,ll d){
    for(int i=0;i<v.size();i++){
        if(v[i]%d!=0) return false;
    }
    return true;
}
bool check2(vector<ll> v ,ll d){
    for(int i=0;i<v.size();i++){
        if(v[i]%d==0) return false;
    }
    return true;
}
void newbie(){
   int n;cin>>n;
   vector<ll>a,b;
   ll gc1=0,gc2=0;
   for(int i=0;i<n;i++){
    ll x;cin>>x;
    if(i%2==0){a.push_back(x);gc1=__gcd(gc1,x);}
    if(i%2==1){b.push_back(x);gc2=__gcd(gc2,x);}
   }
   bool f=true;
   for(int i=0;i<a.size();i++){
     if(a[i]%gc2==0){
        f=false;break;
     }
   }
   if(f){
    cout<<gc2<<nl;return;
   }
   f=true;
   for(int i=0;i<b.size();i++){
      if(b[i]%gc1==0){
        f=false;break;
      }
   }
   if(f){
    cout<<gc1<<nl;return;
   }
   cout<<0<<nl;
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