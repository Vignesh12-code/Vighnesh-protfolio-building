# Problem: Two Sum (Easy)

**Link:** https://leetcode.com/problems/two-sum/

## Approach

I used a nested loop approach to check every possible pair of numbers in the array. If the sum of two numbers is equal to the target, their indices are returned.

## Complexity

- Time: O(n²)
- Space: O(1)

## Notes

The program checks each pair only once by starting the second loop from the element after the first index. This avoids checking the same pair again.