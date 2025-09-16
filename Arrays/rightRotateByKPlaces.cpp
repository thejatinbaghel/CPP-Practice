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

    int temp[k];
    for (int i = sizeOfArray - k; i < sizeOfArray; i++)
    {
        temp[i - (sizeOfArray - k)] = arr[i];
    }
    
    for (int i = sizeOfArray - 1; i >= k; i--)
    {
        arr[i] = arr[i - k];
    }
    
    for (int i = 0; i < k; i++)
    {
        arr[i] = temp[i];
    }
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    
}