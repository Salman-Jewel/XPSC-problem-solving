#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   ll n;
    cin >> n;
    vector<int> a(n),b(n);
    for(ll i=0; i<n; i++){
        cin >> a[i];
    }
    for(ll i=0; i<n; i++){
        cin >> b[i];
    }
    ll c=LONG_LONG_MAX;
    for(ll i=0; i<n; i++){
        if(b[i]!=0){
            c=a[i]-b[i];
            break;
        }
    }
    if(c<0){
        cout<<"NO"<<nl;
        return;
    }
    else{
        for(ll i=0; i<n; i++){
            if(b[i]==0){
                if((a[i]-b[i])>c){
                    cout<<"NO"<<nl;
                    return;
                }  
            }
            else{
                if((a[i]-b[i])!=c){
                    cout<<"NO"<<nl;
                    return;
                }
            }
        }
        cout<<"YES"<<nl;
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