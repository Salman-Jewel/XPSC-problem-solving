#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
void newbie(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        //cout<<"y";
    }
    if(is_sorted(v.begin(),v.end())){
        cout<<"YES"<<endl;return;
    }
    vector<int>temp;
    int x=0;
    for(int i=0;i<v.size();i++){
        if(v[i]>9){
            vector<int>tt;
            int t=v[i];
            int p=t%10;
            t/=10;
            temp.push_back(t);
            temp.push_back(p);
            for(int k=0;k<temp.size();k++)tt.push_back(temp[k]);

            for(int j=i+1;j<v.size();j++){
               tt.push_back(v[j]);
            }
            if(is_sorted(tt.begin(),tt.end())){
                cout<<"YES"<<endl;return;
            }
        }
        else temp.push_back(v[i]);
    }
    cout<<"NO"<<endl;
}
int main()
{
    ios::sync_with_stdio(false),cin.tie(0),cout.tie(0);
    int _;
    cin >> _;
    while (_--)
    {
        newbie();
    }
    return 0;
}