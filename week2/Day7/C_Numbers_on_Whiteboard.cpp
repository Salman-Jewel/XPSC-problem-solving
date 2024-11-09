#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
        int n;
        cin>>n;
        if(n>2){
            cout<<2<<endl;
            cout<<n-2<<" "<<n<<endl;
            cout<<n-1<<" "<<n-1<<endl;
            int a=n-1;
            int b=n-3;
            while(b>0){
              cout<<b<<" "<<a<<endl;
            b--;
            a--;
            }   
        }
        else{
            cout<<2<<endl;
            cout<<1<<" "<<2<<endl;
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