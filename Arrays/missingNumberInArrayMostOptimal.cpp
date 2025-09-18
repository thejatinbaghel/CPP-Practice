#include <bits/stdc++.h>
using namespace std;
int main(){
    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }

    int xor1 = 0, xor2 = 0;
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    }
    // XOR with last number (n+1)
    xor1 = xor1 ^ (sizeOfArray + 1);

    cout << (xor1 ^ xor2) << endl;
    return 0;
}