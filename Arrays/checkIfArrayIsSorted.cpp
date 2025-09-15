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

    for (int i = i; i < sizeOfArray; i++)
    {
        if(arr[i] >= arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}