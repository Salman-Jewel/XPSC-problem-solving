#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   string s,t;cin>>s>>t;
   int one=0,zero=0;
   for(int i=0;i<n;i++){
        if(s[i]=='0')zero++;
        else one++;

        if(s[i]!=t[i]){
            if((s[i]=='0' && one<=0)){
                cout<<"NO"<<nl;return;
            }
            else if (s[i]=='1' && zero<=0 && one<=0){
                 cout<<"NO"<<nl;return;
            }
        }
   }
   cout<<"YES"<<nl;
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