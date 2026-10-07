# Problem: Valid Anagram (Easy)

**Link:** https://leetcode.com/problems/valid-anagram/

## Approach

I used a frequency array to count how many times each character occurs in both strings. For every character in the first string I increased its count, and for every character in the second string I decreased its count.

## Complexity

- Time: O(n)
- Space: O(1)

## Notes

The two strings must have the same length and the same frequency of every character to be anagrams.