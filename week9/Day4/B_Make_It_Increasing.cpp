#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<ll>v(n);
   for(int i=0;i<n;i++){
      cin>>v[i];
   }
   int cnt=0;
   for(int i=n-2;i>=0;i--){
      while(v[i]>=v[i+1] && v[i]!=0){
        v[i]/=2;cnt++;
      }
   }
   bool f=true;
   for(int i=1;i<n;i++){
        if(v[i]<=v[i-1]){f=false;break;}
   }
   if(f){
    cout<<cnt<<nl;
   }else{
    cout<<-1<<nl;
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