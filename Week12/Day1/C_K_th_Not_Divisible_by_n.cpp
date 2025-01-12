#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const ll M=1e18;
    
void newbie(){
   ll n,k;cin>>n>>k;
   ll div = (k - 1) / (n - 1);
   ll ans = div * n + (k - div * (n - 1));       
    cout << ans << nl; 
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