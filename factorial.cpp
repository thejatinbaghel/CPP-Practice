#include <bits/stdc++.h>
using namespace std;

int fact(int n, int sum){
    if(n==0) return sum;
    fact(n-1, sum*n);
}

//2nd method
int fact2(int n){
    if(n==0 || n==1) return 1;
    return n*fact2(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<fact(n,1)<<endl;;
    cout<<fact2(n);  //2nd method
}