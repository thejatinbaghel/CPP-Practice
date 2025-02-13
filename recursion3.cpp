#include <bits/stdc++.h>
using namespace std;

void rec(int n){
    if(n==0) return;
    cout << n << " ";
    rec(n-1);
}

//Another method
void rec2(int n, int m){
    if(m==0) return;
    cout << m << " ";
    rec(n, m-1);
}

int main(){
    int n;
    cin >> n;
    rec(n);
    rec2(n,n); //Another method
}