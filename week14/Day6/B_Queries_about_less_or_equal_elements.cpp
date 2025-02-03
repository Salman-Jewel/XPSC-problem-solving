#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,m;cin>>n>>m;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   sort(all(v));
   while(m--){
    int val;cin>>val;
       int lo=0,hi=n-1;
       while(lo<=hi){
           int mid=(lo+hi)/2;
           if(v[mid]<=val)lo=mid+1;
           else hi=mid-1;
       }
       cout<<lo<<" ";
   }
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