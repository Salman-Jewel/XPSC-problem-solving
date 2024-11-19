#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9;
    
void newbie(){
    int n;cin>>n;
    int m=n*(n-1)/2;
    vector<ll>v(m);
    map<ll,int>mp;
    for(int i=0;i<m;i++){
        cin>>v[i];
        mp[v[i]]++;
    }
    int k=n-1;
    sort(all(v));
    for(int i=0;i<m;i++){
        int cn=mp[v[i]];
        if(cn==0){continue;}
        else {
            cout<<v[i]<<" ";
            mp[v[i]]=cn-k;
            k--;
        } 
    }
    cout<<M<<nl;
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