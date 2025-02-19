#include <bits/stdc++.h>
using namespace std;

int cnt=0;
int main(){
    int n;
    cin >> n;

    while(n>0){
        cout<<n%10;
        cnt+=1;
        n=n/10;
    }
    cout << endl;
    cout << cnt;
}