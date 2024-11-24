#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   bool f=true;
   if(n%2==1)cout<<"NO"<<nl;
   else{
      cout<<"YES"<<nl;
      for(int i=0;i<n/2;i++){
         if(f){cout<<"AA";f=false;}
         else {cout<<"BB";f=true;}
      }
      cout<<nl;
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