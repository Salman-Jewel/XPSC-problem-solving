#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=5*1e5+5;
const int M=1e9+7;

    
void newbie(){
    int n;cin>>n;
    int ar[N];
    set<int>st;
    set<pair<int,int>>st1;
    int k=0;
    for(int i=1;i<=n;i++){
        int q;cin>>q;
        if(q==1){
            cin>>ar[++k];
            st.insert(k);
            st1.insert({-ar[k],k});
        }
        else if(q==2){
            int x=*st.begin();
            cout<<x<<" ";
            st.erase(x);st1.erase({-ar[x],x});
        }
        else{
            int x=st1.begin()->second;
            cout<<x<<" ";
            st.erase(x);st1.erase({-ar[x],x});
        }
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