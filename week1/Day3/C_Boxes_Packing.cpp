#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    vector<ll>v(n),a;
    map<ll,int>mp;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(!mp[v[i]])a.push_back(v[i]);
        mp[v[i]]++;
    }
    sort(all(a),greater<ll>());
    ll sum=mp[a[0]];
    for(int i=1;i<a.size();i++){
        if(mp[a[i]]>sum){
            sum+=(mp[a[i]]-sum);
        }
    }
    cout<<sum<<nl;
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