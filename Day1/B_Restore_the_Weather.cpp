#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,k;cin>>n>>k;
   vector<int>a(n),b(n),c(n);
   for(int i=0;i<n;i++)cin>>a[i];
   for(int i=0;i<n;i++)cin>>b[i];
   sort(all(b));
   c=a;
   sort(all(a));
   map<int,deque<int>>mp;
   for(int i=0;i<n;i++){
      mp[a[i]].push_back(b[i]);
   }
   for(auto e : c){
      cout<<mp[e].front()<<" ";
      mp[e].pop_front();
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