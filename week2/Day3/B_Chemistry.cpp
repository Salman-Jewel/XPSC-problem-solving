#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    map<char,int> mp;
    for(char ele : s)mp[ele]++;
    int cnt=0;
    for(auto ele : mp){
        if(ele.second%2)cnt++;
    }
    if(cnt-1>k)cout<<"NO"<<nl;
    else cout<<"YES"<<nl;
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