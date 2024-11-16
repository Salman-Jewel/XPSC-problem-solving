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
    int zero=0,one=0;
    bool ze=false,on=false;
    if(s[0]=='0')ze=true;
    else on=true;
    for(int i=1;i<n;i++){
        if(s[i]=='0'){
            if(on)one++;
            on=false;
            ze=true;
        }
        else{
            if(ze)zero++;
            on=true;
            ze=false;
        }
    }
    if(ze)zero++;
    else one++;
    cout<<min(zero,one)<<nl;
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