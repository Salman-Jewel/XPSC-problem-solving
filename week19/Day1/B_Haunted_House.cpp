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
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int> in;
    int c_one=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='0')in.push_back(i);
        else c_one++;
    }
    
    ll ans=0,j=0;
    for(int i=n-1;i>=0;i--){
        if(s[i]=='1' && i>=c_one){
            ans+=(i-in[j]);
            s[in[j]]='1';
            cout<<ans<<" ";
        }
        else if(i<c_one){
            cout<<-1<<" ";
        }
        else cout<<0<<" ";
        j++;
    }
    cout<<endl;
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