# Problem: Longest Common Prefix (Easy)

**Link:** https://leetcode.com/problems/longest-common-prefix/

## Approach

I started with the first string as the initial prefix and compared it with each remaining string. Whenever characters stopped matching, I shortened the prefix to the matching portion.

## Complexity

- Time: O(n × m)
- Space: O(m)

## Notes

If the strings have no common prefix, the function returns an empty string. The prefix is continuously reduced as more strings are compared.