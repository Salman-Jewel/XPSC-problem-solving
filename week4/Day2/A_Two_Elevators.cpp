#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    ll a,b,c;cin>>a>>b>>c;
    ll d1=a-1,d2=abs(b-c)+abs(c-1);
    if(d1<d2)cout<<1<<nl;
    else if(d1>d2)cout<<2<<nl;
    else cout<<3<<nl;
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