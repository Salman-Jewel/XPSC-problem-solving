#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    int l=0,r=0,cnt=0,ans=n;
    while (r<n){
        if(s[r]=='W')cnt++;
        if(r-l+1==k){
            ans=min(ans,cnt);
            if(s[l]=='W')cnt--;
            l++;
        }
        r++;
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