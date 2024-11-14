#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        vector<int>v;
        queue<int>qu;
        int n=arr.size(),l=0,r=0;
        while(r<n){
            if(arr[r]<0){
                qu.push(arr[r]);
            }
            if(r-l+1==k){
                if(!qu.empty()){
                    v.push_back(qu.front());
                    if(arr[l]==qu.front()){
                        qu.pop();
                    }
                }
                else{
                    v.push_back(0);
                }
                l++;
            }
            r++;
        }
    return v;
}    
void newbie(){
    int n,k;cin>>n>>k;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    vector<int> ans=FirstNegativeInteger(arr,k);
    for(auto e : ans)cout<<e<<" ";
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