#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,m;cin>>n>>m;
    map<string,string>mp;
    for(int i=0;i<n;i++){
        string a,b;cin>>a>>b;
        mp[b]=a;
        //cout<<b<<" "<<mp[b]<<nl;
    }
    for(int i=0;i<m;i++){
        string a,b,c="";cin>>a>>b;
        for(int i=0;i<b.size()-1;i++){
            c+=b[i];
        }
        cout<<a<<" "<<b<<" #"<<mp[c]<<nl;
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