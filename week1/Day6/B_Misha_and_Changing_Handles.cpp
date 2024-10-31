#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    map<string,string>mp1,mp2;
    set<string>mp;
    for(int i=0;i<n;i++){
        string a,b;cin>>a>>b;
        if(mp.find(a)!=mp.end()){
            mp1[mp2[a]]=b;
            mp2[b]=mp2[a];
            mp.insert(b);
        }
        else{
            mp1[a]=b;
            mp2[b]=a;
            mp.insert(b);
        }
    }
    cout<<mp1.size()<<nl;
    for(auto e : mp1){
        cout<<e.first<<" "<<e.second<<nl;
    }
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