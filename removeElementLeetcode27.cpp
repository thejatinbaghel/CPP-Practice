#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums;
    int size;
    for(int i=0; i<size; i++){
        int number;
        cin >> number;
        nums.push_back(number);
    }
    int val;
    cin >> val;
    int i = 0;
    for(int x:nums){
        if(x!=val) nums[i++];
    }
    cout << i;
    return 0;
}