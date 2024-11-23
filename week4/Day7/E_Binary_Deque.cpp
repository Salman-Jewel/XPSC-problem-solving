#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,s;cin>>n>>s;
    vector<int>v(n);
    int sum=0;
    for(int i=0;i<n;i++){
        cin>>v[i];sum+=v[i];
    }
    if(sum==s){
        cout<<0<<nl;return;
    }
    if(sum<s){
        cout<<-1<<nl;return;
    }
    int i=0,j=0,k=0,ans=INT_MAX;
    while(i<n){
        while(j<n && k+v[j]<=s){
            k+=v[j];
            j++;
        }
        if(k==s) ans=min(ans,n-(j-i));
        k-=v[i];
        i++;
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