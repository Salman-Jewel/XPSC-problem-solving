#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define nl '\n'
#define all(a) (a).begin(),(a).end()
const ll N=1e6+10;
const int M=1e9+7;
    
void newbie(){
    string s, t;
    cin >> s >> t;
    for (int i = 0; i + s.length() <= t.length(); ++i) {
        string h = t.substr(i, s.length());
        if (is_permutation(s.begin(), s.end(), h.begin(), h.end())) {
            cout << "YES\n";
            return;
        }
    }
    cout << "NO\n";

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