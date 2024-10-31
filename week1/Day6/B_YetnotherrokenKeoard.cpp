#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    string s;cin>>s;
    stack<int> up,lo;
    for(int i=0;i<s.size();i++){
        if(s[i]=='B'){
            s[i]='0';
            if(up.empty())continue;
            s[up.top()]='0';
            up.pop();
        }
        else if(s[i]=='b'){
            s[i]='0';
            if(lo.empty())continue;
            s[lo.top()]='0';
            lo.pop();
        }
        else{
            if(s[i]>='A' && s[i]<='Z'){
                up.push(i);
            }
            else{
                lo.push(i);
            }
        }
    }
    for(int i=0;i<s.size();i++){
        if(s[i]!='0')cout<<s[i];
    }cout<<nl;
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