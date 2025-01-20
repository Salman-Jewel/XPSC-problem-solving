#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
bool is_Prime(int n){
    if(n==1)return false;
    if(n<=3)return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}    
void newbie(){
   int d;cin>>d;
   ll x=d+1;
   while(!is_Prime(x)){
      x++;
   }
   ll y=x+d;
   while(!is_Prime(y)){
     y++;
   }
   cout<<x*y<<nl;
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