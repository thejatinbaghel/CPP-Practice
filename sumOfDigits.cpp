#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    cin >> num;
    int sum = 0;

    while(num>0){
        sum+=num%10;
        num /= 10;
    }

    cout<< sum;
    return 0;
}


// LeetCode Version

// int num;
//     cin >> num;
//     while(num>9){
//         int sum = 0;
//         while(num>0){
//             sum += num%10;
//             num /= 10;
//         }
//         num = sum;
//     }
//     cout << num;