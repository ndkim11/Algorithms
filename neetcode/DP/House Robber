[Link to problem](https://neetcode.io/problems/house-robber/question)
You are given an integer array nums where nums[i] represents the amount of money the ith house has. The houses are arranged in a straight line, i.e. the ith house is the neighbor of the (i-1)th and (i+1)th house.

You are planning to rob money from the houses, but you cannot rob two adjacent houses because the security system will automatically alert the police if two adjacent houses were both broken into.

Return the maximum amount of money you can rob without alerting the police.

Example 1:

Input: nums = [1,1,3,3]

Output: 4
Explanation: nums[0] + nums[2] = 1 + 3 = 4.

Example 2:

Input: nums = [2,9,8,3,6]

Output: 16
Explanation: nums[0] + nums[2] + nums[4] = 2 + 8 + 6 = 16.

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 100

You should aim for a solution as good or better than O(n) time and O(n) space, where n is the number of houses.

```
class Solution:
    def rob(self, nums: List[int]) -> int:
        nums_len = len(nums)
        m_sum = [0] * nums_len # empty list of maximum sum until ith house
        for i in range(nums_len):
            if i == 0:
                m_sum[0] = nums[0]
            elif i == 1:
                m_sum[i] = max(m_sum[i-1], nums[i])
            else:
                m_sum[i] = max(m_sum[i-1], m_sum[i-2] + nums[i])

        return m_sum[nums_len-1]
```
