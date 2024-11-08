#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    vector<int>v(n),a,b;
    map<int,int>mp;
    for(int i=0;i<n;i++){cin>>v[i];}
    string s;cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            a.push_back(v[i]);
        }
        else{
            b.push_back(v[i]);
        }
    }
    sort(all(a),greater<int>());
    sort(all(b),greater<int>());
    int k=n;
    for(int i=0;i<a.size();i++){
        mp[a[i]]=k;k--;
    }
    for(int i=0;i<b.size();i++){
        mp[b[i]]=k;k--;
    }
    for(int i=0;i<n;i++){
        cout<<mp[v[i]]<<" ";
    }
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