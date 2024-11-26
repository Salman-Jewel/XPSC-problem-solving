#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n;cin>>n;
   int j=1,k=n*n,c=1;
   vector<vector<int>> a(n, vector<int>(n));
   for(int i=0;i<n;i++){
        for(int p=0;p<n;p++){
            if(c){a[i][p]=k--;c=0;}
            else {a[i][p]=j++;c=1;}
        }
        if(i&1)reverse(all(a[i]));
   }
   for(auto e : a){
    for(auto x : e){
        cout<<x<<" ";
    }
    cout<<nl;
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