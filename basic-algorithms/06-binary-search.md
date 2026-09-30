## Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

### Approach

I used binary search because the given array is sorted.
I repeatedly check the middle element and eliminate half of the search space.

### Complexity

- Time: O(log n)
- Space: O(1)

### Notes

The important edge cases are an empty array and when the target
is smaller or larger than all elements.