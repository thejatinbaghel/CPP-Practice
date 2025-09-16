#include <bits/stdc++.h>
using namespace std;
int main(){
    int sizeOfArray;
    int k;
    cin >> sizeOfArray;
    cin >> k;
    int arr[sizeOfArray];

    for (int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }

    k = k % sizeOfArray;
    reverse(arr, arr + k);
    reverse(arr + k, arr + sizeOfArray);
    reverse(arr, arr + sizeOfArray);
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    
}