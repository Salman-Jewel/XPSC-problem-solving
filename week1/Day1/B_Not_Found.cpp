#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    string s;cin>>s;
    map<char,int>mp;
    for(char e : s)mp[e]=1;
    for(char ch='a';ch<='z';ch++){
        if(!mp[ch]){
            cout<<ch<<nl;return;
        }
    }
    cout<<"None"<<nl;
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