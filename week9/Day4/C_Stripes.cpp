#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   char ar[8][8];
   for(int i=0;i<8;i++){
    for(int j=0;j<8;j++){
        cin>>ar[i][j];
    }
   }
   for(int i=0;i<8;i++){
        int cnt1=0,cnt2=0;
        for(int j=0;j<8;j++){
            if(ar[i][j]=='R')cnt1++;
            if(ar[j][i]=='B')cnt2++;
        }
        if(cnt1==8){
            cout<<'R'<<nl;return;
        }
        if(cnt2==8){
            cout<<'B'<<nl;return;
        }
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