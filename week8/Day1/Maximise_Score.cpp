#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   int ans;
   for(int i=0;i<n;i++){
     if(i==0){
        ans=abs(v[i]-v[i+1]);
     }
     else if(i==n-1){
        ans=min(ans,abs(v[i]-v[i-1]));
     }
     else{
        ans=min(ans,max(abs(v[i]-v[i-1]),abs(v[i]-v[i+1])));
     }
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