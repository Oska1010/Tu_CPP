#include <bits/stdc++.h>
using namespace std;
void AC(){
    int n; cin >> n;
    string x; set<string> se;
    while(cin >> x) se.insert(x);
    for(auto i:se) cout << i << '\n';
}
signed main(){
    freopen("problem2.INP","r",stdin);
    freopen("problem2.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    AC();
    return 0;
}
