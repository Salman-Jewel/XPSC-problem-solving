#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,k;cin>>n>>k;
   map<int,int>mp;
   set<int>st;
   for(int i=0;i<n;i++){
    int x;cin>>x;
    mp[x]++;
    if(mp[x]>=k)st.insert(x);
   }
   int l=0,r=0,cnt=0,a=0,b=0,mx=-1;
   for(auto e : st){
       if(l==0){
            l=e,r=e;
       }
       else if(r==e-1){
            r=e;
       }
       else{
            if((r-l)>mx){
                a=l,b=r;
                mx=r-l;
            }
            l=e,r=e;
       }
   }
   if((r-l)>=mx && l!=0){
        a=l,b=r;
    }
    if(a==0)cout<<-1<<nl;
    else cout<<a<<" "<<b<<nl;
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