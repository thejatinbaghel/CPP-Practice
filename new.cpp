#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        int mini = 0;
        for (int j = i; j < n; j++)
        {
            if(arr[j]<arr[mini]){
                mini = j;
            }      
        }
        swap(arr[mini]==arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
     
    return 0;
}
