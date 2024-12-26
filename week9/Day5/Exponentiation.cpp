#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const ll M=1e9+7;
ll modExp(ll base, ll exp) {
    ll result = 1;
    base = base % M;

    while(exp > 0) {
        if (exp % 2 == 1) {
            result = (result * base) % M;
        }
        base = (base * base) % M;
        exp /= 2;
    }
    return result;
}    
void newbie(){
   ll a,b;cin>>a>>b;
   if(b==0)cout<<1<<nl;
   else if(a==0)cout<<0<<nl;
   else{
    cout<<modExp(a,b)<<nl;
   }
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