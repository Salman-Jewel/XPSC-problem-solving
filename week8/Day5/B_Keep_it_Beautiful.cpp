#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   int frist=-1,last=-1;
   bool flag=false;
   string ans="";
   for(int i=0;i<n;i++){
    int num;cin>>num;
        if(flag){
            if(num<=frist && num>=last){
                ans+='1';
                last=num;
            }
            else ans+='0';
        }
        else{
            if(frist==-1){
                frist=num;
                last=num;
                ans+='1';
            }
            else if(num>=last){
                last=num;
                ans+='1';
            }
            else if(num<=frist){
                last=num;
                ans+='1';
                flag=true;
            }
            else ans+='0';
        }
   }
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