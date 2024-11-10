#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    double x,y,z;cin>>x>>y>>z;
    double game=x+y+z;
    if(4-game+x+(y*0.5)>(z+y*0.5))cout<<"Yes"<<nl;
    else cout<<"No"<<nl;
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