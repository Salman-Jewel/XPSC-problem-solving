#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const ll M=1e9+7;
    
void newbie(){
    ll n,k;cin>>n>>k;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)cin>>v[i];
    ll i=0,j=0,ans=0;
    multiset<ll>ml;
    while(j<n){
        ml.insert(v[j]);
        ll mn=*ml.begin(),mx=*ml.rbegin();
        if(mx-mn<=k){
            ans+=(j-i+1);
        }
        else{
            while(i<=j){
                mn=*ml.begin(),mx=*ml.rbegin();
                if(mx-mn<=k){
                    break;
                }
                ml.erase(ml.find(v[i]));
                i++;
            }
            mn=*ml.begin(),mx=*ml.rbegin();
            if(mx-mn<=k){
                ans+=(j-i+1);
            }
        }
        j++;
    }
    cout<<ans<<nl;
}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    // ll _;cin >> _;
    // while (_--){
        newbie();
    // }
    return 0;
}