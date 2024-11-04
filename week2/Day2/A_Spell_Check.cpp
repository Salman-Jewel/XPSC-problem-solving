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
    if(s.size()!=5)cout<<"NO"<<nl;
    else {
        int T=0,I=0,m=0,u=0,r=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='T')T=1;
            if(s[i]=='i')I=1;
            if(s[i]=='m')m=1;
            if(s[i]=='u')u=1;
            if(s[i]=='r')r=1;
        }
        if(T && I && m && u && r)cout<<"YES"<<nl;
        else cout<<"NO"<<nl;
    }

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