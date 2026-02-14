#include "string"
#include "map"
#include "iostream"

using namespace std;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int mx = 0;
        if (s == "") return 0;
        if (s.length() == 1) return 1;

        for(int i = 0; i < s.length() - 1; i++)
        {
            map<char, bool> check;
            check[s[i]] = true;
            for(int j = i+1; j < s.length(); j++)
            {
                if (check[s[j]]) break;
                check[s[j]] = true;
            }
            if (check.size() > mx) mx = check.size();
        }

        return mx;
    }
};
