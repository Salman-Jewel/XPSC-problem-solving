#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;
   string s;cin>>n>>s;
   int zero=count(all(s),'1');
   int one=count(all(s),'0');
   if((min(zero,one))%2==0)cout<<"Ramos"<<nl;
   else cout<<"Zlatan"<<nl;
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