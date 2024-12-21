#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
ll cnt(vector<int> p){
    ll zero=0,ans=0;
    for(int i=p.size()-1;i>=0;i--){
        if(p[i]==0)zero++;
        else{
            ans+=zero;
        }
   }
   return ans;
}    
void newbie(){
   int n;cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   vector<int>a=v,b=v;
   for(int i=0;i<n;i++){
    if(a[i]==0){a[i]=1;break;}
   }
   for(int i=n-1;i>=0;i--){
    if(b[i]==1){
        b[i]=0;break;
    }
   }
   cout<<max({cnt(v),cnt(a),cnt(b)})<<nl;
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