#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    ll n;cin >> n;
    ll m = n/4;
    for (int i = 0; i<m; i++){
        cout << "aabb";
    }
    if (n % 4 == 3){
        cout << "aab";
    }
    else if (n % 4 == 2){
        cout << "aa";
    }
    else if (n % 4 == 1){ 
        cout << "a";
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