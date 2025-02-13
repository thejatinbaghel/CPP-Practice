#include <iostream>
using namespace std;

// int main(){
//     int n;
//     cin >> n;
//     int count = 0;
    
//     while(n>0){
//         cout << n%10;
//         count += 1;
//         n = n/10;
//     }
    
//     cout << count;
//     return 0;
// }

int evenlyDivides(int n) {
        int count = 0;
        int num = n;
    
    while(num>0){
        int lastDigit = num%10;

        if(n%lastDigit==0){
            count += 1;
        }
        num = num/10;
    }
    
    return count;
    }

int main(){
    int n;
    cin >> n;
     cout << evenlyDivides(n);
}