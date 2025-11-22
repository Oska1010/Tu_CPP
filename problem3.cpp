#include <bits/stdc++.h>
using namespace std;
void AC(){
    int n,k; cin >> n >> k;
    int a[n];
    for(int i=0;i<n;i++) cin >> a[i];
    sort(a,a+n);
    int i=0,s=0;
    while(k-a[i]>=0){
        k-=a[i];
        s++;
        i++;
    }
    cout << s;
}
signed main(){
    freopen("problem3.INP","r",stdin);
    freopen("problem3.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    AC();
    return 0;
}
