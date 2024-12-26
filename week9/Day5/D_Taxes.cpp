#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
bool isPrime(ll n){
    for(int i=2;i*i<=n;i++){
      if(n%i==0){
        return false;
      }
   }
   return true;
}    
void newbie(){
   ll n;cin>>n;
   if(isPrime(n))cout<<1<<nl;
   else if((n%2==0) || isPrime(n-2)){
    cout<<2<<nl;
   }
   else cout<<3<<nl;

}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    // int _;cin >> _;
    // while (_--){
        newbie();
    // }
    return 0;
}