#include <bits/stdc++.h>
using namespace std;

int main(){
int num1 = 0;
int num2 = 1;
int num;
cin >> num;

for(int i = 0; i < num; i++){
    cout << num1 << " ";
    int next = num1 + num2;
    num1 = num2;
    num2 = next;
    
}
}