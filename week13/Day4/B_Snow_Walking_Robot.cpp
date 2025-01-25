#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   string s;cin>>s;
   int l=0,r=0,u=0,d=0;
   for(auto e : s){
    if(e=='R')r++;
    if(e=='L')l++;
    if(e=='U')u++;
    if(e=='D')d++;
   }
   if(r==0 || l==0){
      if(min(u,d)>=1)cout<<2<<nl<<"UD";
      else cout<<0<<nl;
   }
   else if(u==0 || d==0){
      if(min(r,l)>=1)cout<<2<<nl<<"LR";
      else cout<<0<<nl;
   }
   else{
    cout<<2*min(r,l)+2*min(u,d)<<nl;
   for(int i=0;i<min(r,l);i++)cout<<'R';
   for(int i=0;i<min(u,d);i++)cout<<'U';
   for(int i=0;i<min(r,l);i++)cout<<'L';
   for(int i=0;i<min(u,d);i++)cout<<'D';
   }
   cout<<nl;

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