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
    ll n,m;
    cin>>n>>m;
    ll a[n],b[n],c[n];
    for(int i=1; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];
    a[0]=M;
    sort(a,a+n);
    sort(b,b+n);
    ll co=0,i=0;
    bool track[n];
    for(int j=0;j<n;j++)
    {
        if(b[j]>a[i])i++,track[j]=1;
        else
        {
            co++;
            track[j]=0;
        }
    }
    bool bonus[n];ll bos=-1;
    for(int i=n-1;i>=0;i--)
    {
        if(track[i]==0)
        {
            bonus[i]=1;
            bos=i;break;
        }else
        {
            if(i==n-1)
            {
                bonus[i]=0;
            }else
            {
                bonus[i]=bonus[i+1];
                if(bonus[i]!=0) {bos=i;break;}
            }
        }
    }
    ll ans=co*m;
    bos=b[bos]-1;
    ans=ans-min(bos,m);
    cout<<ans<<"\n";
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