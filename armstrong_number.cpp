#include <bits/stdc++.h>
using namespace std;
int main(){
    int num;
    int result = 0;
    cin >> num;
    int temp = num;
    int count = 0;
    
    while (num > 0)
    {
        count++;
        num/=10;
    }

    while(temp>0){
        int lastDigit = temp%10;
        result += pow(lastDigit, count);
        temp/=10;
    }
    
    cout << result;
    return 0;
}