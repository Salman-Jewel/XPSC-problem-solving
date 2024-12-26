#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   ll ans=1;
   for(int i=1;i<=n;i++){
      ans=(ans*i)%M;
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