#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,x;cin>>n;
    multiset<pair<int,int>>st;
    ll ans=0;
    for(int i=0;i<n;i++){
        cin>>x;
        if(x==0){
            if(st.size()==0)continue;
            else{
                int p=st.begin()->first,in=st.begin()->second;
                ans+=abs(p);
                st.erase({p,in});
            }
        }
        else{
            st.insert({-x,i});
        }
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