#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int k,n,m;cin>>k>>n>>m;
    vector<int>a(n),b(m),v(n+m);
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<m;i++)cin>>b[i];
    int i=0,j=0,in=0;
    while(in<n+m){
        if(i<n && a[i]==0){
            v[in]=a[i];i++;k++;
        }
        else if(j<m && b[j]==0){
            v[in]=b[j];j++;k++;
        }
        else if(i<n && a[i]<=k){
            v[in]=a[i];i++;
        }
        else if(j<m && b[j]<=k){
            v[in]=b[j];j++;
        }
        else{
            cout<<-1<<nl;return;
        }
        in++;
    }
    for(auto e : v)cout<<e<<" ";
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