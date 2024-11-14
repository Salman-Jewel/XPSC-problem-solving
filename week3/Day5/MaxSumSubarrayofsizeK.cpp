#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
long long maximumSumSubarray(vector<int>& arr, int k) {
        long long sum=0,ans=0,n=arr.size(),l=0,r=0;
        while(r<n){
            sum+=arr[r];
            if(r-l+1==k){
                ans=max(sum,ans);
                sum-=arr[l];
                l++;
            }
            r++;
        }
        return ans;
 }    
void newbie(){
    int n,k;cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    cout<<maximumSumSubarray(arr,k)<<nl;
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