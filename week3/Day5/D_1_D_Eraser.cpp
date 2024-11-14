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
    int l=0,r=0,cnt=0,ans=0;
    while(r<n){
        if(s[r]=='B'){
            cnt=1;
        }
        if(cnt==0){
            l++;
        }
        if(r-l+1==k || r==n-1){
            if(cnt)ans++;
            cnt=0;
            l=r+1;
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