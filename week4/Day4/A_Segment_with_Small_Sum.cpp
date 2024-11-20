
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    ll n,s;cin>>n>>s;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll i=0,j=0,ans=0,sum=0;
    while(j<n){
        sum+=v[j];
       if(sum<=s){
            ans=max(ans,j-i+1);
        }
        else{
            sum-=v[i];
            i++;
        }
        j++;
    }
    cout<<ans<<nl;
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