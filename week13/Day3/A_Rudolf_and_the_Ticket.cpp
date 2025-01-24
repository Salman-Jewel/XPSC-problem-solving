#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,m,k;cin>>n>>m>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   int cnt=0;
   for(int i=0;i<m;i++){
      int x;cin>>x;
      for(int j=0;j<n;j++){
         if(v[j]+x<=k)cnt++;
      }
   }
   cout<<cnt<<nl;
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