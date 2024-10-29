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
    map<char,int>mp;
    set<char>st;
    for(char ch : s)st.insert(ch);
    string tm="",ans="";
    for(char ch : st)tm+=ch;
    int m=tm.size();
    for(int i=0;i<m;i++){
        mp[tm[i]]=tm[m-1-i];
    }
    for(auto e : s){
        ans+=mp[e];
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