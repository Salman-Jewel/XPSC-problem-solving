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
    int i=0,j=n-1,c=1;
    ll s=0,d=0;
    while(i<=j){
        if(c){
            if(v[i]>v[j]){
                s+=v[i];i++;
            }
            else{
                s+=v[j];j--;
            }
            c=0;
        }
        else{
            if(v[i]>v[j]){
                d+=v[i];i++;
            }
            else{
                d+=v[j];j--;
            }
            c=1;
        }
    }
    cout<<s<<" "<<d<<nl;
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