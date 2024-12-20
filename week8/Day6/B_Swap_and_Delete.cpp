#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   string s;cin>>s;
   int zero=0,one=0,n=s.size();
   for(int i=0;i<n;i++){
        if(s[i]=='1')one++;
        else zero++;
   }
   if(one==zero)cout<<0<<nl;
   else if(one==0 || zero==0){
    cout<<n<<nl;
   }
   else{
        
        for(int i=0;i<n;i++){
            bool f=true;
            if(s[i]=='1' && zero>0){
                zero--;f=false;
            }
            if(s[i]=='0' && one>0){
                one--;f=false;
            }
            if(f){
                cout<<(n-i)<<nl;break;
            }
        }
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