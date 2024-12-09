#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n;cin>>n;
   vector<ll>v,a,ans;
   for(int i=0;i<=60;i++){
        if((1&(n>>i))){
            v.push_back(i);
        }
   }
   if(v.size()<2){
        cout<<1<<nl<<n<<nl;
   }
   else{
        ans.push_back(n);
        for(auto e : v){
            ll k=(1LL<<e);
            ans.push_back(n-k);
        }
        cout<<ans.size()<<nl;
        for(int i=ans.size()-1;i>=0;i--){
            cout<<ans[i]<<" ";
        }cout<<nl;
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