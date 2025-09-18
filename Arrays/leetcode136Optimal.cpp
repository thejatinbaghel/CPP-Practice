// Find the number that appears once, and other numbers twice.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorr = 0;
        for(int i = 0; i < nums.size(); i++) {
            xorr = xorr ^ nums[i];
        }
        return xorr;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.singleNumber(nums);

    cout << "The single number is: " << result << endl;

    return 0;
}
