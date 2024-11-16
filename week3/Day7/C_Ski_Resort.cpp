#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,k,q;cin>>n>>k>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll i=0,j=0,cnt=0,ans=0;
    while(j<n){
        if(v[j]>q){
            cnt=0;
        }
        else{
            cnt++;
            if(cnt>=k)ans+=(cnt-k+1);
        }
        j++;
    }
    cout<<ans<<nl;
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