#include <bits/stdc++.h>
using namespace std;

int coun = 1;
void rec(int n){
    if(coun>n) return;
    cout << coun;
    coun++;
    rec(n);
}

int main(){
    int n;
    cin >> n;
    rec(n);
    return 0;
}