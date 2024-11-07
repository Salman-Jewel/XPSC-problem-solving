#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,q;cin>>n>>q;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    map<int,pair<int,int>>mp;
    map<int,int>mp1;
    for(int i=0;i<n;i++){
        if(!mp1[v[i]]){
            mp[v[i]].first=i;
            mp[v[i]].second=-1;
            mp1[v[i]]=1;
        }
        else{
            mp[v[i]].second=i;
        }
    }
    while(q--){
        int a,b;cin>>a>>b;
        if(!mp1[a] || !mp1[b]){
            cout<<"NO"<<nl;
        }
        else if(mp[b].second==-1 && mp[a].first<=mp[b].first){
            cout<<"YES"<<nl;
        }
        else if(mp[b].second!=-1 && mp[a].first<=mp[b].second){
            cout<<"YES"<<nl;
        }
        else{
            cout<<"NO"<<nl;
        }
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