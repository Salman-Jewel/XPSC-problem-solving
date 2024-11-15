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
    for(int i=0;i<n;i++)cin>>v[i];
    ll ans=0,sum=0,i=0,cnt=0,op=0;
    while(i<n){
        if(v[i]<0 || (v[i]==0 && cnt==1)){
            cnt=1;
        }
        else{
            if(cnt)op++;
            cnt=0;
        }
        ans+=abs(v[i]);
        i++;
    }
    if(cnt)op++;
    cout<<ans<<" "<<op<<nl;
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