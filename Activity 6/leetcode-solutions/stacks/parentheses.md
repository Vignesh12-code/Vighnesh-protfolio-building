# Problem: Valid Parentheses (Easy)

**Link:** https://leetcode.com/problems/valid-parentheses/

## Approach

I used a stack because brackets need to be matched in last-in-first-out order. Opening brackets are pushed into the stack, and when a closing bracket is found, it is compared with the top of the stack.

## Complexity

- Time: O(n)
- Space: O(n)

## Notes

A closing bracket is valid only when it matches the most recently opened bracket. The stack must also be empty at the end for the string to be valid.