#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,m;cin>>n>>m;
   string a,b;cin>>a>>b;
   int ans=0,i=0,j=0;
   while(i<n && j<m){
       if(a[i]==b[j]){
          ans++,i++,j++;
       }
       else j++;
   }
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