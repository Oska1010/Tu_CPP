#include <bits/stdc++.h>
using namespace std;
int cw,ch;
bool cmp(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b){
    int n=min((a.first.first-1)/cw,(a.first.second-1)/ch);
    int m=min((b.first.first-1)/cw,(b.first.second-1)/ch);
    return n<m;
}
void AC(){
    int n;
    cin >> n >> cw >> ch;
    vector<pair<pair<int,int>,int>> v;
    map<int,int> mp;
    for(int i=1;i<=n;i++){
        int a,b; cin >> a >> b;
        if(a>cw&&b>ch&&mp[a]<1&&mp[b]<1){
            v.push_back({{a,b},i});
            mp[a]++; mp[b]++;
        }
    }
    sort(v.begin(),v.end(),cmp);
    if(v.empty()){
        cout << 0; return;
    }
    cout << v.size() << '\n';
    for(int i=0;i<v.size();i++){
        cout << v[i].second << " ";
    }
}
int main() {
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    AC();
    return 0;
}