#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int a,b,n,s,x;cin>>a>>b>>n>>s;
    if(s/n>a)x=a;
    else x=s/n;
    if((n*x)+b>=s){
        cout<<"YES"<<nl;
    }
    else{
        cout<<"NO"<<nl;
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