#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> nums = {1, 2, 45, 32, 2, 45, 45, 7};
    int val = 45;
    int i = 0;
    for (const int num : nums)
      if (num != val)
        nums[i++] = num;
    cout << i;
    return 0;
}