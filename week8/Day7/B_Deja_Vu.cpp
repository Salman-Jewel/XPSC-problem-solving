#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,k;cin>>n>>k;
   vector<int>a(n),b(k);
   for(int i=0;i<n;i++)cin>>a[i];
   vector<int>v;
   map<int,int>mp;
   for(int i=0;i<k;i++){
      cin>>b[i];
      if(mp[b[i]]==0)v.push_back(b[i]);
      mp[b[i]]++;
   }
    for(auto i : v){
      ll m=(1<<i);
      for(int j=0;j<n;j++){
         if(a[j]%m==0){
            a[j]+=(1<<(i-1));
         }
      }
    }
   for(auto e : a)cout<<e<<" ";
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