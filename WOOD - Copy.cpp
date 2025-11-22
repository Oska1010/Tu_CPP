#include <bits/stdc++.h>
using namespace std;
void AC(){
    int t; cin >> t;
    while(t--){
        priority_queue<int,vector<int>,greater<int>> pq;
        int n; cin >> n;
        int s=0;
        for(int i=0;i<n;i++){
            int x; cin >> x;
            pq.push(x);
        }
        while(pq.size()>=2{
            int i=pq.top();
            pq.pop();
            i+=pq.top();
            pq.pop();
            s+=i;
            pq.push(i);
        }
        cout << s << '\n';
    }
}
signed main(){
    freopen("WOOD.INP","r",stdin);
    freopen("WOOD.OUT","w",stdout);
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    AC();
    return 0;
}
