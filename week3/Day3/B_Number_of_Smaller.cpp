#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    int n,m;cin>>n>>m;
    vector<int>v(n);
    for(int i=0;i<n;i++)cin>>v[i];
    for(int i=0;i<m;i++){
        int k;cin>>k;
        int lo=0,hi=n-1,res=-1;
        while(lo<=hi){
            int mid=(hi+lo)/2;
            if(v[mid]>k){
                hi=mid-1;
            }
            else if(v[mid]<k){
                lo=mid+1;
            }
            else {
                res=mid;
                hi=mid-1;
            }
        }
        if(res!=-1)cout<<res<<" ";
        else cout<<lo<<" ";
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