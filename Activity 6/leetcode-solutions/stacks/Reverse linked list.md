# Problem: Reverse Linked List (Easy)

**Link:** https://leetcode.com/problems/reverse-linked-list/

## Approach

I used three pointers: prev, curr, and next. For each node, I saved the next node, reversed the current node's link to point to the previous node, and then moved the pointers forward.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The list is reversed by changing the next pointers of the nodes. The prev pointer becomes the new head after the entire list has been processed.