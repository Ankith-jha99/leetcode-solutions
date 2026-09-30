## Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

### Approach

I used a stack to store opening brackets.
Whenever a closing bracket is encountered, I check whether it matches
the most recently added opening bracket.

### Complexity

- Time: O(n)
- Space: O(n)

### Notes

The order of brackets is important, so a stack is suitable because
it follows the Last In First Out (LIFO) principle.