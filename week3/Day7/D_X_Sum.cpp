#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,m;cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    ll ans=INT_MIN;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            ll sum=0,p=i,q=j;
            while(p>=0 && q<m){
                sum+=a[p][q];p--;q++;
            }
            p=i+1,q=j+1;
            while(p<n && q<m){
                sum+=a[p][q];p++;q++;
            }
            p=i+1,q=j-1;
            while(p<n && q>=0){
                sum+=a[p][q];p++;q--;
            }
            p=i-1,q=j-1;
            while(p>=0 && q>=0){
                sum+=a[p][q];p--;q--;
            }
            ans=max(ans,sum);
        }
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