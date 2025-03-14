#include <bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    ll n;cin>>n;
    vector<ll>v(n+1);
    for(int i=0;i<n;i++){
    cin>>v[i];
    }
    vector<ll>suja(n+1);
    suja[0]=0;suja[1]=1;
    for(int i=1;i<n-1;i++){
        if(v[i]-v[i-1]>v[i+1]-v[i]){
            suja[i+1]=1+suja[i];
        }
        else {
            suja[i+1]=(v[i+1]-v[i])+suja[i];
        }
    }
    vector<ll>ulta(n+1);
    ulta[n-1]=0;
    ulta[n-2]=1;
    for(int i=n-2;i>0;i--){
       if(v[i]-v[i-1]<v[i+1]-v[i]){
        ulta[i-1]=1+ulta[i];
       }
       else{
        ulta[i-1]=(v[i]-v[i-1])+ulta[i];
       }
    }
    int t;cin>>t;
    while(t--){
        int a,b;cin>>a>>b;
        if(a<b){
            cout<<suja[b-1]-suja[a-1]<<endl;
        }
        else cout<<ulta[b-1]-ulta[a-1]<<endl;
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