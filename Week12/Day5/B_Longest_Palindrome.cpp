#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,m;cin>>n>>m;
   vector<string>v(n),p,q,r;
   for(int i=0;i<n;i++)cin>>v[i];
   map<int,int>mp;
   string a,b,ex="";
   int si=0;
   for(int i=0;i<n;i++){
        a=v[i];
       for(int j=0;j<n;j++){
            if(i!=j && mp[i+1]==0 && mp[j+1]==0)b=v[j];
            else continue;
            reverse(all(b));
            if(a==b){
                p.push_back(a);
                reverse(all(b));
                q.push_back(b);
                mp[i+1]=1;
                mp[j+1]=1;
                si+=(2*a.size());
                break;
            }
       }
   }
   for(int i=0;i<n;i++){
      if(mp[i+1]==0){
          string a=v[i],b=v[i];
          reverse(all(b));
          if(a==b){
            ex=a;
          }
      }
   }
   cout<<si+ex.size()<<nl;
   for(auto e : p){
    cout<<e;
   }
   if(ex!="")cout<<ex;
   reverse(all(q));
   for(auto e : q)cout<<e;
   cout<<nl;

}
    
int main()
{
    ios::sync_with_stdio(false),
    cin.tie(0),cout.tie(0);
    // int _;cin >> _;
    // while (_--){
        newbie();
    // }
    return 0;
}