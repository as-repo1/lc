#include <iostream>
#include <vector>
#include <limits>

using namespace std;

// void printSubarrays(const vector<int>& arr) {
//     int n = arr.size();
//     // Iterate over all possible starting indices
//     for (int start = 0; start < n; ++start) {
//         // Iterate over all possible ending indices
//         for (int end = start; end < n; ++end) {
//             // Print the subarray from start to end
//             cout << "[";
//             for (int i = start; i <= end; ++i) {
//                 cout << arr[i];
//                 if (i < end) {
//                     cout << ", ";
//                 }
//             }
//             cout << "]" << endl;
//         }
//     }
// }


int minSumOfSubarrays(const vector<int>& arr) {
    int n = arr.size();
    int minSum = 0;

    // Iterate over all possible starting indices
    for (int start = 0; start < n; ++start) {
        int minSubarray = numeric_limits<int>::max();

        // Iterate over all possible ending indices
        for (int end = start; end < n; ++end) {
            // Update the minimum value for the current subarray
            minSubarray = min(minSubarray, arr[end]);

            // Add the minimum value to the total sum
            minSum += minSubarray;
        }
    }

    return minSum;
}

int main() {
    // Example array
    vector<int> arr = {3, 1, 2, 4};

    // Find the minimum of each subarray and add them to a variable
    int result = minSumOfSubarrays(arr);

    cout << "Minimum sum of subarrays: " << result << endl;

    return 0;
}
