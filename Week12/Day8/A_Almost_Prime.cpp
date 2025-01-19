#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
bool is_prime(int n){
    if(n<2)return false;
    if(n<4)return true;
    for(int i=2;i*i<=n;i++){
        if(n%i==0)return false;
    }
    return true;
}    
void newbie(){
   int n;cin>>n;
   int cnt=0;
   for(int i=1;i<=n;i++){
        int pri=0;
        for(int j=1;j*j<=i;j++){
            if(i%j==0){
                if(is_prime(j))pri++;
                if(i/j!=j && is_prime(i/j))pri++;
            }
        }
        if(pri==2)cnt++;
   }
   cout<<cnt<<nl; 
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