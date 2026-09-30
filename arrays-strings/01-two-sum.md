## Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

### Approach

I used a HashMap to store the values that I have already seen.
For each element, I check whether the required value (target - current value)
is already present in the HashMap.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

An important edge case is when the array contains duplicate values.