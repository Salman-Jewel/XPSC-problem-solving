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
    for(int i=0;i<n;i++){
        int t;cin>>t;
        string s;cin>>s;
        for(int j=0;j<t;j++){
            if(s[j]=='D'){
                if(v[i]==9)v[i]=0;
                else v[i]++;
            }
            else{
                if(v[i]==0){
                    v[i]=9;
                }
                else{
                    v[i]--;
                }
            }
        }
    }
    for(auto e : v)cout<<e<<" ";
    cout<<nl;
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