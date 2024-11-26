#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n;cin>>n;
    vector<ll>v(n);
    ll od=0,ev=0,mxOD=-1,mxEV=-1;
    for(int i=0;i<n;i++){
        cin>>v[i];
        if(v[i]&1){
            od++;
            mxOD=max(v[i],mxOD);
        }
        else {
            ev++;
            mxEV=max(v[i],mxEV);
        }
    }
    int cnt=0;
    if(od && ev){ 
        sort(all(v));
        for(int i=0;i<n;i++){
            if((v[i]&1)==0){
                if(v[i] < mxOD) {cnt++;mxOD=mxOD+v[i];}
                else {cnt+=2;mxOD=mxOD+v[i]+mxEV;}
            }
        }
    }
    cout<<cnt<<nl;
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