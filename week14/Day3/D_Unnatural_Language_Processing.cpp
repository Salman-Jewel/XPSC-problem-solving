#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   string s;cin>>s;
   string ans="";
   bool V=false,C=false;
   for(int i=n-1;i>=0;i--){
        ans+=s[i];
        if(i==0)continue;
       if(s[i]=='b' || s[i]=='c' || s[i]=='d'){
           if(V && C){
              ans+='.';
              V=!V,C=!C;
           }
           else if(V){
             ans+='.';
             V=!V;
           }
           else{
              C=!C;
           }
       }
       else{
          V=!V;
       }
   }
   reverse(all(ans));
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