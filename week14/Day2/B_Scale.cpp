#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
       ll n,k;cin>>n>>k;
    char arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    vector<string>v;
    for(int i=0;i<n;i+=k){
        string s="";
        int t=0;
        for(int j=0;j<n;j++){
            if(t==k-1){
                s+=arr[i][j];
                t=0;
            }
            else t++;
        }
        v.push_back(s);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<nl;
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