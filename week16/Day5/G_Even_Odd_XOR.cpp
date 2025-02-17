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
   ll case1=0,case2=0;
   for(int i=0;i<n-2;i++){
      case1^=i;
      case2^=(i+1);
   }
   long long Last = ((long long)1<<31)-1;
   if(case1 != 0){
       for(int i=0;i<n-2;i++)cout<<i<<' ';
       case1^=Last;
      cout<<Last<<' '<<case1<<nl;
   }
   else{
       for(int i=1;i<=n-2;i++)cout<<i<<' ';
       case2^=Last;
       cout<<Last<<' '<<case2<<nl;
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