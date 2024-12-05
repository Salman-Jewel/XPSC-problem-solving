#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   int n,x;cin>>n;
   ll sum=0,zero=0;
   for(int i=0;i<n;i++){
        cin>>x;
        if(i!=n-1){
           if(sum>0 && x==0)zero++;
           sum+=x;
        }
   }
   sum+=zero;
   cout<<sum<<nl;
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