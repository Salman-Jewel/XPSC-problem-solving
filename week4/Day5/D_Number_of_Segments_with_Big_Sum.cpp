#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    ll n,s;cin>>n>>s;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll ans=0,sum=0,i=0,j=0;
    while(j<n){
        sum+=v[j];
        while(sum>=s){
            ans+=(n-j);
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