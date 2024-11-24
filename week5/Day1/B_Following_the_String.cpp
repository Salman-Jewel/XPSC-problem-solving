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
   map<char,int>mp;
   for(char ch='a';ch!='z';ch++)mp[ch]=-1;
   char ch='a';
   for(int i=0;i<n;i++){
      if(v[i]==0){
        mp[ch]=0;
        cout<<ch;ch++;
      }
      else{
        for(auto e : mp){
            if(v[i]-1==e.second){
                cout<<e.first;
                mp[e.first]++;
                break;
            }
        }
      }
   }
   cout<<nl;
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