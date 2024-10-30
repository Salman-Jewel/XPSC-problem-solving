#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    map<string,int>mp;
    deque<string>v;
    while(n--){
        string s;cin>>s;
        v.push_front(s);
    }
    for(auto e : v){
        if(!mp[e])cout<<e<<nl;
        mp[e]=1;
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