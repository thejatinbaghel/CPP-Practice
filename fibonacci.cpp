#include <bits/stdc++.h>
using namespace std;

// int num1, num2;
// num1 = 1;
// num2 = 1;
void fib(int n, int num1, int num2){
    if(n<0)return;
    cout<<num1 << endl;
    int num3 = num1;
    num1 = num2;
    num2 = num3+num2;
    fib(n-1,num1,num2);
    
}

int main(){
    int n;
    cin >> n;
    fib(n,1,1);
    return 0;
}