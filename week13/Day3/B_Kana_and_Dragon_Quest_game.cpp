#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int h,n,m;cin>>h>>n>>m;
   while(n-- && h/2+10<h){
       h=h/2+10;
   }
   h-=(m*10);
   //cout<<h<<nl;
   if(h>0)cout<<"NO"<<nl; 
   else cout<<"YES"<<nl;
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