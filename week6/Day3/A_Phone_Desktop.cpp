#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int x,y;cin>>x>>y;
   int a=ceil(y/2.0);
   int b=a*15 - y*4;
   if(b>=x)cout<<a<<nl;
   else{
       x-=b;
       cout<<a+ceil(x/15.0)<<nl;
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