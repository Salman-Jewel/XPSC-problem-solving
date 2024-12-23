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
   if(s[0]=='s')s[0]='.';
   if(s[n-1]=='p')s[n-1]='.';
   set<char>st;
   for(auto e : s){
    if(e!='.')st.insert(e);
   }
   if(st.size()>1)cout<<"NO"<<nl;
   else cout<<"YES"<<nl;
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