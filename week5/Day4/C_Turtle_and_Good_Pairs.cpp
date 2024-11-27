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
   for(auto e : s)mp[e]++;
//    vector<pair<int,char>>vp;
//    for(auto e : mp){
//     vp.push_back({e.second,e.first});
//    }
//     sort(all(vp));
//     for(int i=vp.size()-1;i>=0;i--){
//         int k=vp[i].first;
//         while(k--)cout<<vp[i].second;
//     }
    string ans="";
    for(char ch='a';;ch++){
        if(mp[ch]>0){
            ans+=ch;
            mp[ch]--;
        }
        if(ans.size()==n)break;
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