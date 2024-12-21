#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
  ll n,k;cin>>n>>k;
   vector<int>v(n);
   ll sum=0;
   for(int i=0;i<n;i++){
        cin>>v[i];
        sum+=v[i];
   }
   ll sum1=n*(n+1)/2;
   ll p=sum1-sum;
   v.push_back(p);
   k=k%(n+1);
   for(int i=0;i<n;i++){
     cout<<v[(i-k+n+1)%(n+1)]<<" ";
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