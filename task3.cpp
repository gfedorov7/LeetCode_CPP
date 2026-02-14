#include "string"
#include "map"
#include "iostream"

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left = 0, right = 0, maxLen = 0;
        map<char, int> lastIndex;

        while(right < s.length()) {
            if (lastIndex.find(s[right]) != lastIndex.end()) {
                left = max(left, lastIndex[s[right]] + 1);
            }
            lastIndex[s[right]] = right;
            maxLen = max(maxLen, right - left + 1);
            right++;
        }

        return maxLen;
    }
};