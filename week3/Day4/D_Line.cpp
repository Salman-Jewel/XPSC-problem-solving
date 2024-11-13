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
    vector<int>v;
    ll sum=0;
    for(int i=0;i<n;i++){
        if(s[i]=='L'){
            v.push_back((n-1-i)-i);
            sum+=(i);
        }
        else{
            v.push_back(i-(n-1-i));
            sum+=(n-1-i);
        }
    }
    sort(all(v),greater<int>());
    for(auto e : v){
        if(e>0)sum+=e;
        cout<<sum<<" ";
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