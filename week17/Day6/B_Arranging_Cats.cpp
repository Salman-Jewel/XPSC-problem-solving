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
    int n;cin>>n;
    string s1,s2;
    cin>>s1>>s2;
    int c1=count(s1.begin(),s1.end(),'1');
    int c2=count(s2.begin(),s2.end(),'1');
    if(c2>=c1){
        int ans=0;
        for(int i=0;i<n;i++){
            if((s2[i]=='1' && s1[i]=='0')){
                ans++;
            }
        }
        cout<<ans<<nl;
    }
    else{
        int cnt=0;
        for(int i=0;i<n;i++){
          if(s2[i]=='1' && s1[i]=='1'){
                cnt++;
          }
        }
        int t=c2;
        c2-=cnt;
        cout<<c2+(c1-t)<<endl;
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