#include <bits/stdc++.h>
using namespace std;
int main(){
    int sizeOfArray;
    cin >> sizeOfArray;
    int arr[sizeOfArray];
    int num;
    cin >> num;

    for(int i = 0; i < sizeOfArray; i++)
    {
        cin >> arr[i];
    }

    for(int i = 0; i < sizeOfArray; i++){
        if(arr[i] == num) return i;
    }
    return -1;
}