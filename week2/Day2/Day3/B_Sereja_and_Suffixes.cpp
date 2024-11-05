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
    map<int,int>mp;
    set<int>u;
    for(int i=n-1;i>=0;i--){
        u.insert(v[i]);
        mp[i]=u.size();
    }
    while(q--){
        int in;cin>>in;
        cout<<mp[in-1]<<nl;
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