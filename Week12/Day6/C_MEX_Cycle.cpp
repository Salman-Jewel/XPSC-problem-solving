#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,x,y;cin>>n>>x>>y;
   vector<int>v(n);
   for(int i=0;i<n;i++){
      v[i]=i%2;
   }
   if(n%2==1 || (abs(x-y)%2==0))v[x-1]=2;
   for(int i=0;i<n;i++)cout<<v[i]<<" ";
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