#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int a,b,c;cin>>a>>b>>c;
    if((a+b+c)%2){cout<<-1<<nl;return;}
    int ans;
    if((a+b)>=c){
        ans=c;
        ans+=((a+b)-c)/2;
    }
    else{
        ans=(a+b);
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