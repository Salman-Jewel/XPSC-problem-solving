#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<int>v(n);
   int zero=0,other=0;
   for(int i=0;i<n;i++){
     cin>>v[i];
     if(v[i]==0)zero++;
     else other++;
   }
   if(zero==0 || zero-1<=other){
    cout<<0<<nl;
   }
   else{
        sort(all(v));
        if(v[n-1]==1)cout<<2<<nl;
        else cout<<1<<nl;
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