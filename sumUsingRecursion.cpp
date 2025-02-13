#include <bits/stdc++.h>
using namespace std;

int rec(int m, int n, int ans){
    if(m>n)return ans;
    rec(m+1,n,ans+m);
}

//2nd method
int rec2(int ans, int n){
    if(n<1)return ans;
    rec2(ans+n,n-1);
}

//3rd method
int sum(int n){
    if(n==0) return 0;
    return n+sum(n-1);
}

int main(){
    int n;
    cin >> n;
    cout<<rec(1,n,0)<<endl;
    cout<<rec2(0,n)<<endl;  //2nd method
    cout<<sum(n);
}