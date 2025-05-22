#include <iostream>
using namespace std;


int main(){
    int n;
    cin >> n;
    int rev = 0;
    int num = n;
    if(num<0){
        n = n*-1;
    }
    while(n>0){
        int lastDigit = n%10;
        rev = rev*10+lastDigit;
        n = n/10;
    }
    if(num<0){
    cout << rev;}
    else{
        cout<< rev;
    }
}

// 2nd solution
// int reverse(int n){
//     long ans = 0;

//     while (n != 0) {
//       ans = ans * 10 + n % 10;
//       n /= 10;
//     }

//     return (ans < INT_MIN || ans > INT_MAX) ? 0 : ans;
//   }
    
//     int main(){
//         int n;
//         cin >> n;
//         cout << reverse(n);
//     }


// 3rd solution
// int main(){
//     int num;
//     cin >> num;
//     int reverse  = 0;

//     while(num!=0){
//         int rem = num%10;
//         reverse = reverse * 10 + rem;
//         num /= 10;
//     }

//     cout << reverse;