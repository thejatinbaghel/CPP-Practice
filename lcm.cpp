#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin >> n >> m;

    if(n>m){
        if(n%m==0) cout << (n/m)*m;
        else cout << n*m;
    }
}