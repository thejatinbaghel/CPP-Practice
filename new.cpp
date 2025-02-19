#include <bits/stdc++.h>
using namespace std;

int rev=0;
int main(){
    int n;
    cin >> n;

    while(n>0){
        rev = rev*10+n%10;
        n=n/10;
    }
    cout << endl;    cout << rev;
}