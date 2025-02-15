#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   string a,b;cin>>a>>b;
   if(a[0]==b[0]){
    cout<<"YES"<<nl<<a[0]<<'*'<<nl;
   }
   else if(a[a.size()-1]==b[b.size()-1]){
    cout<<"YES"<<nl<<'*'<<b[b.size()-1]<<nl;
   }
   else{
      for(int i=0;i<b.size()-1;i++){
        string s=b.substr(i,2);
        if(a.find(s)!= string::npos){
            cout<<"YES"<<nl<<'*'<<s<<'*'<<nl;
            return;
        }
      }
      cout<<"NO"<<nl;
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