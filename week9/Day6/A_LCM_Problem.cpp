#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,m;cin>>n>>m;
    if(m%n==0)cout<<n<<" "<<m<<nl;
    else if(m%2==0 && (m/2)>n){
        cout<<m/2<<' '<<m<<nl;
    }
    else if((m-1)/2 >= n){
        cout<<(m-1)/2<<' '<<m-1<<nl;
    }
    else cout<<-1<<' '<<-1<<nl;
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