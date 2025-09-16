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

    int i = 0;
    for(int j = 1; j < sizeOfArray; j++){
        if(arr[j] != arr[i]){
            arr[i+1] = arr[j];
            i++;
        }
    }
    cout << i+1 << endl; // Number of unique elements

    // Print updated array
    for(int idx = 0; idx <= i; idx++) {
        cout << arr[idx] << " ";
    }
}