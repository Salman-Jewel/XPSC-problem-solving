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
   vector<int>ans;
   ans.push_back(v[0]);
   ans.push_back(-1*v[0]);
   for(int i=1;i<n;i++){
        vector<int>tem;
        for(auto e : ans){
            tem.push_back(e+v[i]);
        }
        for(auto e : ans){
            tem.push_back(e-v[i]);
        }
        ans=tem;
   }
   for(auto e : ans){
        if(e%360==0){
            cout<<"YES"<<nl;return;
        }
   }
   cout<<"NO"<<nl;
}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    // int _;cin >> _;
    // while (_--){
        newbie();
    // }
    return 0;
}