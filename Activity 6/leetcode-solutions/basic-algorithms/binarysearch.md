# Problem: Binary Search (Easy)

**Link:** https://leetcode.com/problems/binary-search/

## Approach

I used binary search because the input array is sorted. I maintained left and right pointers and repeatedly checked the middle element, reducing the search range by half each time.

## Complexity

- Time: O(log n)
- Space: O(1)

## Notes

Binary search requires the array to be sorted. If the target is found, its index is returned; otherwise, the function returns -1.