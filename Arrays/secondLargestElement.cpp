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

    int largest = arr[0];
    for (int i = 0; i < sizeOfArray; i++)
    {
        if (arr[i] > largest) largest = arr[i];
    }
    
    int secondLargest = -1;
    for (int i = 0; i < sizeOfArray; i++){
        if(arr[i] > secondLargest && arr[i] != largest) secondLargest = arr[i];
    }

    cout << secondLargest;
}