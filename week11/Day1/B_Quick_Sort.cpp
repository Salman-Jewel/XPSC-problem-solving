#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,k;cin>>n>>k;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   int j=1;
   for(int i=0;i<n;i++){
      if(v[i]==j)j++;
   }
   j--;
   if(j>n)cout<<0<<nl;
   else cout<<ceil((n-j)/(double)k)<<nl;
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