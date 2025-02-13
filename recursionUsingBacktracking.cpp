#include <bits/stdc++.h>
using namespace std;

void rec(int m, int n){
    if(m<1) return;
    rec(m-1,n);
    cout<<m<<" ";
}

int main(){
    int n;
    cin >> n;
    rec(n,n);
}