#include <vector>

#include <algorithm>


class Solution {

public:

  int maxSubArray(std::vector<int>& nums) {

    int maxSum = nums[0]; // Initialize maxSum with the first element

    int currentSum = nums[0]; // Initialize currentSum with the first element

    for (int i = 1; i < nums.size(); i++) {

      // Choose between starting a new subarray or extending the existing one

      currentSum = std::max(nums[i], currentSum + nums[i]);

      // Update maxSum if currentSum is greater

      maxSum = std::max(maxSum, currentSum);

    }

    return maxSum;

  }
};

