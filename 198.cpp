#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {
        // Initialize variables to keep track of the maximum amount robbed
        int current = 0;  // Represents the maximum amount if the current house is robbed
        int previous = 0; // Represents the maximum amount if the previous house is robbed

        // Iterate through the houses
        for (int i = 0; i < nums.size(); ++i) {
            // Temporarily store the current value of 'current'
            int temp = current;

            // Update 'current' to be the maximum amount if the current house is robbed or if the previous house is robbed
            current = max(previous + nums[i], current);

            // Update 'previous' to the previous value of 'current'
            previous = temp;
        }

        // The final 'current' value represents the maximum amount that can be robbed
        return current;
    }
};

int main() {
    // Input array representing the amount of money in each house
    vector<int> nums = {2, 7, 9, 3, 1};

    // Create an instance of the Solution class
    Solution sol;

    // Call the rob function to get the result
    int result = sol.rob(nums);

    // Output the final result
    cout << "Maximum amount that can be robbed: " << result << endl;

    return 0;
}
