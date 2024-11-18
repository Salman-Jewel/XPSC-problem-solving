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
    int i=n-1;
    string ans="";
    while(i>=0){
        int tm;
        if(s[i]=='0'){
            tm=(s[i-2]-'0');
            tm*=10;
            tm+=(s[i-1]-'0');
            i-=3;
        }
        else{
            tm=(s[i]-'0');i--;
        }
        ans+=(tm+'a'-1);
    }
    reverse(all(ans));
    cout<<ans<<nl;

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