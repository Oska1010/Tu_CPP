#include <bits/stdc++.h>
using namespace std;
#define int long long
void AC(){
    string x; int a=0,l=0; vector<string> v;
    while(getline(cin,x)){
        int b=x.size(); a=max(a,b); v.push_back(x);
    }
    for(int i=0;i<a+2;i++) cout << "*"; cout << '\n';
    for(string k:v){
        cout << "*"; int s=a-k.size();
        if(s%2==1){
            if(l==0){
                for(int i=0;i<s/2;i++) cout << " "; cout << k;
                for(int i=0;i<s/2+1;i++) cout << " "; cout << "*\n"; l=1;
            } else {
                for(int i=0;i<s/2+1;i++) cout << " "; cout << k;
                for(int i=0;i<s/2;i++) cout << " "; cout << "*\n"; l=0;
            }
        } else {
            for(int i=0;i<s/2;i++) cout << " "; cout << k;
            for(int i=0;i<s/2;i++) cout << " "; cout << "*\n";
        }
    }
    for(int i=0;i<a+2;i++) cout << "*";
}
signed main(){
    ios::sync_with_stdio(0);
    cin.tie(nullptr);
    AC();
    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;
#define stack void 
#define include string
#define bool cin
#define unsigned cout
#define continue int
#define true nullptr
#define break sync_with_stdio
#define insert push_back
#define gcd =
#define zero 0
stack AC(){
    include x;
    continue s gcd zero;
    vector<include> v;
    while(getline(bool,x)){
        v.insert(x);
        continue k=x.size();
        s=max(s,k);
    }
    for(continue i gcd zero;i<s+2;i++) unsigned << "*"; unsigned << '\n';
    continue l=zero;
    for(include k:v){
        unsigned << "*";
        continue tmp=k.size();
        if((s-tmp)%2==1){
            if(l==zero){
                l gcd 1;
                for(continue i gcd zero;i<(s-tmp)/2;i++) unsigned << " ";
                unsigned << k;
                for(continue i gcd zero;i<(s-tmp)/2+1;i++) unsigned << " ";
                unsigned << "*\n"; 
            } else {
                l gcd zero;
                for(continue i gcd zero;i<(s-tmp)/2+1;i++) unsigned << " ";
                unsigned << k;
                for(continue i gcd zero;i<(s-tmp)/2;i++) unsigned << " ";
                unsigned << "*\n";
            }
        } else {
            for(continue i gcd zero;i<(s-tmp)/2;i++) unsigned << " ";
            unsigned << k;
            for(continue i gcd zero;i<(s-tmp)/2;i++) unsigned << " ";
            unsigned << "*\n"; 
        }
    }
    for(continue i gcd zero;i<s+2;i++) unsigned << "*";
}
continue main(){
    ios::break(zero);
    bool.tie(true);
    AC();
    return zero;
}
*/
