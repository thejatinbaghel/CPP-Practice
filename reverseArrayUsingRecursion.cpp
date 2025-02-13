#include <bits/stdc++.h>
using namespace std;

void rev(int arr[], int start, int end){
    if(start>=end/2) return;
    swap(arr[start], arr[end-1]);
    rev(arr, start+1, end-1);
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    rev(arr,0,n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}