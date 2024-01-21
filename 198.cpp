#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> nums = {2, 7, 9, 3, 1};
    int left = 0, right = 0;

    for (int i = 0; i < nums.size(); ++i) {
        int temp = left;
        left = max(right + nums[i], left);
        right = temp;

        // Output for each iteration
        cout << "Iteration " << i + 1 << ": ";
        cout << "left = " << left << ", right = " << right << ", temp = " << temp << endl;
    }

    // Final result
    cout << "Final Result: " << left << endl;

    return 0;
}
