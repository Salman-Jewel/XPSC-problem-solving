#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,a;cin>>n;
    vector<int>ev,od;
    for(int i=0;i<n;i++){
        cin>>a;
        if(a%2==0)ev.push_back(a);
        else od.push_back(a);
    }
    ll sum=0;
    for(int i=0;i<ev.size();i++){
       sum+=ev[i];
    }
    if(od.size()%2==0){
        for(int i=0;i<od.size();i++){
            sum+=od[i];
        }
    }
    else{
        sort(all(od));
        for(int i=1;i<od.size();i++){
            sum+=od[i];
        }
    }
    cout<<sum<<nl;
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