// Find the number that appears once, and other numbers twice.

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0; i < n; i++) {
            int cnt = 0;
            for(int j = 0; j < n; j++) {
                if(nums[i] == nums[j]) {
                    cnt++;
                }
            }
            if(cnt == 1) {
                return nums[i];
            }
        }
        return -1; // if no unique element found
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
