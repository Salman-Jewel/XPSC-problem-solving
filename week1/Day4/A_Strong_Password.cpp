#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    string s;cin>>s;
    string a="";a+=s[0];
    bool f=true;
    for(int i=1;i<s.size();i++){
        if(s[i]==a[i-1] && f){
            if(s[i]=='z')a+='a';
            else a+=(s[i]+1);
            a+=s[i];
            f=false;
        }
        else a+=s[i];
    }
    if(a.size()==s.size()){
        if(s[0]=='z')a='a'+s;
        else a='z'+s;
    }
    cout<<a<<nl;
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