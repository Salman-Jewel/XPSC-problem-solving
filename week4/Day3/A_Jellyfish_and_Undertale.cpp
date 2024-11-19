#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int a,b,n;cin>>a>>b>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    ll sum=0;
    for(int i=0;i<n;i++){
        if((b+v[i])>a){
            sum+=(b-1);
            b=min(a,1+v[i]);
        }
        else{
            b+=v[i];
        }
    }
    sum+=(b);
    cout<<sum<<nl;
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