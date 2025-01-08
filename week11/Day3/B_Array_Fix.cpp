#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   vector<int>v(n);
   for(int i=0;i<n;i++)cin>>v[i];
   vector<int>a({v[n-1]});
    for(int i=n-2;i>=0;i--){
        if (v[i] > a.back()) {
        a.push_back(v[i] % 10);
        a.push_back(v[i] / 10);
        } else {
        a.push_back(v[i]);
        }
    }
    reverse(all(a));
    if(is_sorted(all(a)))cout<<"YES"<<nl;
    else cout<<"NO"<<nl;
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