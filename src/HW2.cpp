#include <bits/stdc++.h>
using namespace std;
void AC(){
    map<string,int> mp;
    int n; cin >> n;
    while(n--){
        string x; cin >> x;
        mp[x]++;
        if(mp[x]>1){
            cout << x << mp[x]-1 << '\n';
        } else cout << "OK" << '\n';
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    AC();
    return 0;
}