#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   string s;cin>>s;
   int n=s.size();
   string p="",q="",t="";
   for(int i=0;i<n;i++){
      p+='(';t+=')';
      q+="()";
   }
   p+=t;
   bool a=true,b=true;
   for(int i=0;i<=2*n-n;i++){
      if(p.substr(i,n)==s){
        a=false;
      }
      if(q.substr(i,n)==s){
        b=false;
      }
   }
   if(a){
    cout<<"YES"<<nl<<p<<nl;
   }
   else if(b){
      cout<<"YES"<<nl<<q<<nl;
   }
   else{
    cout<<"NO"<<nl;
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