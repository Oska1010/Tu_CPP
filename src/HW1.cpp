#include <bits/stdc++.h>
using namespace std;
#define int long long
void AC(){
    string x;
    int s=0,ans=0;
    while(getline(cin,x)){
        if(x[0]=='+') s++;
        else if(x[0]=='-') s--;
        else {
            int i=1;
            while(x[i]!=':') i++; i++;
            string k=x.substr(i,x.size()-i);
            ans+=k.size()*s;
        }
    }
    cout << ans;
}
signed main(){
    freopen("bai1.inp","r",stdin);
    freopen("bai2.out","w",stdout);
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    AC();
    return 0;
}
