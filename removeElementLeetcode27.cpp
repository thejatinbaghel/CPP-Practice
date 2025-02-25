#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 45, 32, 2, 45, 45, 7};
    int val;
    cin >> val;
    int i = 0;
    for(int x:nums){
        if(x!=val) nums[i++];
    }
    cout << i;
    return 0;
}