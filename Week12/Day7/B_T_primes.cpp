#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n;cin>>n;
   ll m=sqrt(n);
   bool f=true;
   for(int i=2;i*i<=m;i++){
     if(n%i==0)f=false;
   }
   if(n==4 || (n>4 && n%2==1 && f && m*m==n))cout<<"YES"<<nl;
   else cout<<"NO"<<nl;
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