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

    int j = -1;
    for (int i = 0; i < sizeOfArray; i++)
    {
        if(arr[i] == 0){
            j = i;
            break;
        }
    }

    for (int i = j + 1; i < sizeOfArray; i++)
    {
        if(arr[i] != 0){
            swap(arr[i], arr[j]);
            j++;
        }
    }
    

    // if(j == -1) return arr;
    
    for (int i = 0; i < sizeOfArray; i++)
    {
        cout << arr[i] << " ";
    }
    
}