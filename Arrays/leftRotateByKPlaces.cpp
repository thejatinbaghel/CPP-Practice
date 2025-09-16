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
    k = k % sizeOfArray;
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    
    for (int i = k; i < sizeOfArray; i++)
    {
        arr[i-k] = arr[i];
    }
    
    for (int i = sizeOfArray - k; i < sizeOfArray; i++)
    {
        arr[i] = temp[i-(n-d)];
        j++;
    }
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    
}