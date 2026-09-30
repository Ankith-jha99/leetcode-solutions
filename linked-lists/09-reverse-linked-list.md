## Problem: Reverse a Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

### Approach

I reverse the linked list by changing the direction of each node's
next pointer. I keep track of the previous, current, and next nodes.

### Complexity

- Time: O(n)
- Space: O(1)

### Notes

The important part is to save the next node before changing the
current node's next pointer.