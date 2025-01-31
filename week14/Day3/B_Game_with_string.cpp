#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
   string s;cin>>s;
   stack<char>st;
   int ans=0;
   for(int i=0;i<s.size();i++){
       if(!st.empty()){
           if(st.top()==s[i]){
            st.pop();
            ans++;
           }
           else st.push(s[i]);
       }
       else{
        st.push(s[i]);
       }
   }
   if(ans&1)cout<<"Yes"<<nl;
   else cout<<"No"<<nl;
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