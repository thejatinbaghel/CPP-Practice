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

    int hash[13]={0};
    for(int i = 0; i < sizeOfArray; i++){
        hash[arr[i]] += 1;
    }
    
    int q;
    cin >> q;

    while(q--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}