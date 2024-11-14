#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,m;cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int i=0,j=0;
    ll ans=0;
    while(i<n && j<m){
        int cur=a[i],cnt1=0,cnt2=0;
        while(i<n && a[i]==cur){
            cnt1++;i++;
        }
        while(j<m && b[j]<cur){
            j++;
        }
        while(j<m && b[j]==cur){
            cnt2++;j++;
        }
        ans+=(1LL*cnt1*cnt2);
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