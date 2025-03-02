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
    ll n,x,y;cin>>n>>x>>y;
    ll lcm=(x*y)/__gcd(x,y);
    ll com=n/lcm;
    x=n/x;
    y=n/y;
    x-=com;
    y-=com;
 
    ll sumX=x*(n+(n-x+1))/2;
    ll sumY=(y*(y+1))/2;
 
    cout<<sumX-sumY<<nl; 
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