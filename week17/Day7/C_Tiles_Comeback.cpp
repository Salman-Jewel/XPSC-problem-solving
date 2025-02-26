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
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int in_N0=-1,t=k;
    for(int i=0;i<n;i++){
        if(v[0]==v[i]){
          t--;
          if(t==0){
            in_N0=i;
            break;
          }
        }
    }
    if(t!=0){
        cout<<"NO"<<endl;
        return ;
    }
    if(v[0]==v[n-1]){
        cout<<"YES"<<endl;
        return ; 
    }
    int cnt_vN=0; 
    for(int i=in_N0+1;i<n;i++){
        if(v[i]==v[n-1]){
         cnt_vN++;
        }
    }
    if((cnt_vN>=k)){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
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