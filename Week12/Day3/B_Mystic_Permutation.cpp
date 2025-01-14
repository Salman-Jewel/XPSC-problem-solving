#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<int>v(n),a(n);
   for(int i=0;i<n;i++){
      cin>>v[i];
   }
   if(n==1){
    cout<<-1<<nl;return;
   }
   map<int,int>mp;
   int c=1;
   for(int i=0;i<n;i++){
    bool f=true;
      for(int j=1;j<=n;j++){
            if(j!=v[i] && mp[j]==0){
                a[i]=j;f=false;
                mp[j]=1;break;
            }
        }
        if(f){
            a[i]=v[i];
            swap(a[i],a[i-1]);
        }
   }
   for(auto e : a){
    cout<<e<<' ';
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