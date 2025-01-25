#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   sort(all(v));
   int sum=2*v[n-1],ans=0;
   for(int s=2*v[0];s<=sum;s++){
       int i=0,j=n-1,cnt=0;
       while(i<j){
          if(v[i]+v[j]==s){
            cnt++,i++,j--;
          }
          else if(v[i]+v[j]>s){
            j--;
          }
          else i++;
       }
       ans=max(ans,cnt);
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