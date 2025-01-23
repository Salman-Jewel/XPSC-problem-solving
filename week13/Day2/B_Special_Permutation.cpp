#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,a,b;cin>>n>>a>>b;
   map<int,int>mp;
   int m=n;
   vector<int>v;
   v.push_back(a);
   for(int i=1;i<=n;i++){
      if(m==a || m==b)m--;
      else {v.push_back(m);m--;}
      
   }
   v.push_back(b);
   for(int i=0;i<n;i++){
      if((i<n/2 && v[i]<a)||(i>=n/2 && v[i]>b)){
        cout<<-1<<nl;return;
      }
   }
   for(auto e : v)cout<<e<<' ';
    cout<<nl;
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