#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,p=0,x;cin>>n;
   for(int i=0;i<n;i++){
       cin>>x;
       p^=x;
   }
   if(n%2==0 && p!=0)cout<<-1<<nl;
   else cout<<p<<nl;
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