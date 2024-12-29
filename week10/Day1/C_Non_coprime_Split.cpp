#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int l,r;cin>>l>>r;
   for(int i=max(4,l);i<=r;i++){
      for(int j=2;j*j<=i;j++){
         if(i%j==0){
            cout<<j<<' '<<i-j<<nl;
            return;
         }
      }
   }
   cout<<-1<<nl;
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