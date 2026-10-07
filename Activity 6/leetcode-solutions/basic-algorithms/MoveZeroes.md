# Problem: Move Zeroes (Easy)

**Link:** https://leetcode.com/problems/move-zeroes/

## Approach

I used two pointers. One pointer scans the array while the second pointer keeps track of the position where the next non-zero element should be placed. Non-zero elements are swapped into their correct positions.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The solution modifies the array in-place and keeps the relative order of the non-zero elements unchanged.