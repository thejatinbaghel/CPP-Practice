#include <bits/stdc++.h>
using namespace std;

int num1 = 0;
int num2 = 1;
int num;
cin >> num;

for(int i = 0; i < num; i++){
    int next = num1 + num2;
    int num1 = num2;
    int num2 = next;
    cout << num1 << " ";
}
