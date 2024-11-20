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
    for(int i=0;i<n;i++)cin>>v[i];
    ll ans=INT_MAX,sum=0,i=0,j=0;
    while(j<n){
        sum+=v[j];
        while(sum>=s){
            ans=min(ans,j-i+1);
            sum-=v[i];
            i++;
        }
        j++;
    }
    if(ans==INT_MAX)cout<<-1<<nl;
    else cout<<ans<<nl;
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