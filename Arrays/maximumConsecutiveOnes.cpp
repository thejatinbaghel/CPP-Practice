#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int maximum = 0;
        int cnt = 0;
        for(int i = 0; i < n; i++) {
            if(nums[i] == 1) {
                cnt++;
                maximum = max(cnt, maximum);
            }
            else {
                cnt = 0;
            }
        }
        return maximum;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter array elements (0s and 1s only): ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    Solution obj;
    int result = obj.findMaxConsecutiveOnes(nums);

    cout << "Maximum consecutive 1s: " << result << endl;

    return 0;
}
