#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,k;cin>>n>>k;
   vector<ll>v(n+1),a(n+1);
   for(int i=n-k+1;i<=n;i++)cin>>v[i];
    for(int i=n-k+2;i<=n;i++){
        a[i]=v[i]-v[i-1];
    }
    if(k==1){
    cout<<"Yes"<<nl;
    }
    else if(!is_sorted(a.begin()+n-k+2,a.end())){
        cout<<"No"<<nl;
    }
    else if(v[n-k+1]>a[n-k+2]*(n-k+1)){
        cout<<"No"<<nl;
    }
    else{
        cout<<"Yes"<<nl;
    }
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