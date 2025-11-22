#include <bits/stdc++.h>
using namespace std;
void AC(){
    int s=0; string x; getline(cin,x);
    for(int i=0;i<x.size();i++) if(x[i]-'0'>=1&&x[i]-'0'<=9) s+=x[i]-'0';
    cout << s;
}
signed main(){
    freopen("problem1.INP","r",stdin);
    freopen("problem1.INP","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    AC();
    return 0;
}

