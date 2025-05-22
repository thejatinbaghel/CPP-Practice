#include <bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {333,23,6,145,70};
    int n = 5;
    
    for (int i = n-1; i >= 0; i--)
    {
        for(int j = 0; j < i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[i], arr[j]);
            }
        }
    }
    

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}