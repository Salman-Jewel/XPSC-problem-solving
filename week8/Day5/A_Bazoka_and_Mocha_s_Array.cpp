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
   bool f=true;
   for(int i=1;i<n;i++){
        if(v[i]<v[i-1]){
            f=false;
        }
        if(f==false){
            if(v[n-1]>v[0] || (!is_sorted(v.begin()+i,v.end()))){
                cout<<"No"<<nl;return;
            }
        }
   }
   cout<<"Yes"<<nl;
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