//Given a circular integer array nums of length n, return the maximum possible sum of a non-empty subarray of nums.


#include <limits.h>

int maxSubarraySumCircular(int* nums, int numsSize) {
    
    int total = 0;
    int maxSum = nums[0], curMax = 0;
    int minSum = nums[0], curMin = 0;
    
    for(int i = 0; i < numsSize; i++) {
        
        // Kadane for maximum subarray
        curMax = (curMax > 0) ? curMax + nums[i] : nums[i];
        if(curMax > maxSum)
            maxSum = curMax;
        
        // Kadane for minimum subarray
        curMin = (curMin < 0) ? curMin + nums[i] : nums[i];
        if(curMin < minSum)
            minSum = curMin;
        
        total += nums[i];
    }
    
    
    if(maxSum < 0)
        return maxSum;
    
    
    return (maxSum > total - minSum) ? maxSum : total - minSum;
}
